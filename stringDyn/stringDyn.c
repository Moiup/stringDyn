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
    int n;
    char *final_string = NULL;

    n = strlen(s) + 1;
    final_string = (char *)malloc(n * sizeof(char));
    if(final_string == NULL)
    {
        return NULL;
    }

    strcpy(final_string, s);

    return final_string;
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
char *stringDyn_double_to_string(double d, int n)
{
    int int_part = d;

    
}