/**
 * 
 * Name: stringDyn.h
 * 
 * Description: declaration of string function. All uses dynamic allocation, so they need to be freed
 * 
 * Date: 2020/01/10
 * 
 * Author: Mohammed-Bashir Mahdi
*/
#ifndef STRING_DYN_H
#define STRING_DYN_H
#include <stdlib.h>
#include <string.h>

/**
 * Create a string with the content of s.
 * Useful if you want to write : stringDyn_create("hello world!");
 * 
 * Return the string, NULL if failed.
*/
char *stringDyn_create(char *s);

/**
 * Concatenate 2 string.
 * 
 * Return a new string from the concatenation of s1 and s2, NULL if failed.
*/
char *stringDyn_concat_new(char *s1, char *s2);

/**
 * Concatenate 2 string s1 and s1 by reallocating s1
 * 
 * Return the reallocated s1
 * 
*/
char *stringDyn_concat_realloc(char *s1, char *s2);

#endif