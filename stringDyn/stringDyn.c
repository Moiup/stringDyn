/**
 * 
 * Name: stringDyn.c
 * 
 * Description: definition of string function.
 * 
 * Date: 2020/01/10
 * 
 * Author: Mohammed-Bashir Mahdi
*/
#include "stringDyn.h"

/**
 * Create a string with the content of s.
 * Useful if you want to write : stringDyn_create("hello world!");
 * 
 * Return the string, NULL if failed.
*/
char *stringDyn_create(char *s)
{
    return strdup(s);
}

/**
 * Concatenate 2 string.
 * 
 * Return a new string from the concatenation of s1 and s2, NULL if failed.
*/
char *stringDyn_concat_new(char *s1, char *s2)
{
    int n;
    char *new_string;

    n = strlen(s1) + strlen(s2) + 1;
    new_string = NULL;

    new_string = (char *)malloc(n * sizeof(char));
    if(new_string == NULL)
    {
        return NULL;
    }
    strcpy(new_string, s1);
    strcat(new_string, s2);

    return new_string;
}

/**
 * Concatenate 2 string s1 and s1 by reallocating s1
 * 
 * Return the reallocated s1
 * 
*/
char *stringDyn_concat_realloc(char *s1, char *s2)
{
    int n = strlen(s1) + strlen(s2) + 1;

    s1 = (char *)realloc(s1, n * sizeof(char));
    if(s1 == NULL)
    {
        return NULL;
    }

    strcat(s1, s2);

    return s1;
}

/**
 *  Return an array of string value
 *
 *  s: the string to split
 *  d: the delimiter to use
 *  n: the number of cut to make (0 to split as much as the number of delimiter found)
 *  n_tab: while store the size of the resulting array
 */
char **stringDyn_split(char *s, char *d, int n, int *n_tab){
    char **tab;
    char *tofree;
    char *string;
    char *tmp;
    int i = 0;

    tofree = string = strdup(s);

    // Allocating memory for the first time
    *n_tab = 1;
    tab = (char **)malloc((*n_tab) * sizeof(char *));
    if(tab == NULL){
        return NULL;
    }

    tmp = strsep(&string, d);
    // Checking if there is at least one element
    if(tmp == NULL){
        free(tofree);
        free(tab);
        return NULL;
    }
    tab[i] = strdup(tmp);
    i++;

    while((tmp = strsep(&string, d)) != NULL && ((n <= 0) || (n > 0 && i < n)))
    {
        *n_tab += 1;
        tab = (char **)realloc(tab, (*n_tab) * sizeof(char *));
        if(tab == NULL)
        {
            return NULL;
        }

        tab[i] = strdup(tmp);
        i++;
    }

    free(tofree);

    return tab;
}

/**
 * Free an array gotten after a split on a string
 *
 * src (in out): array of string gotten with stringDyn_split
 * n_tab (in out): length of the array. Will be set to 0.
 *
 * Return: a freed array of string
 */
char **stringDyn_free_splited_char(char **src, int *n_tab){
    int i;

    for (i = 0; i < *n_tab; i++){
        free(src[i]);
    }

    free(src);
    
    *n_tab = 0;

    return src;
}

/**
 * Take an int and return a string encoding this integer
 * Return NULL if failed
*/
char *stringDyn_int_to_string(int n)
{
    char to_string[stringDyn_MAX_INT_LENGTH];
    char *final = NULL;

    sprintf(to_string, "%d", n);

    final = (char *)malloc((strlen(to_string) + 1) * sizeof(char));
    if(final == NULL)
    {
        return NULL;
    }

    strcpy(final, to_string);

    return final;
}

/**
 * Take a double and convert it into a string
 * n: the number of value to keep after the .
*/
char *stringDyn_float_to_string(float d, int n)
{
    int i;
    int int_part = d;
    float decimal_part;
    char * double_string;
    char * final_string;
    int unit;

    final_string = stringDyn_int_to_string(int_part);
    if(final_string == NULL)
    {
        return NULL;
    }

    /* Creating the string containing the value below 0 */
    /* We add 2 because, first value is '.' and last '\0' */
    double_string = (char *)malloc((n + 2) * sizeof(char));
    if(double_string == NULL)
    {
        return NULL;
    }

    decimal_part = d - int_part;
    double_string[0] = '.';
    for(i = 1; i <= n; i++)
    {
        unit = decimal_part * stringDyn_TEN_BASE;
        double_string[i] = '0' + unit;
        decimal_part = decimal_part * stringDyn_TEN_BASE - unit;
    }

    double_string[n + 1] = '\0';
    
    final_string = stringDyn_concat_realloc(final_string, double_string);

    free(double_string);

    return final_string;
}
