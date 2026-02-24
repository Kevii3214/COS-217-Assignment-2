#ifndef STR_INCLUDED
#define STR_INCLUDED

/*-----------------------------------------------------------------*/
/* returns length of string */
#include <stddef.h>
size_t Str_getLength(const char string[]);

/*-----------------------------------------------------------------*/
/* copies string2 onto string1*/
char* Str_copy(char string1[], const char string2[]);

/*-----------------------------------------------------------------*/
/* concatanates string2 to the end of string1*/
char* Str_concat(char string1[], const char string2[]);

/*-----------------------------------------------------------------*/
/* compares two strings lexicographically */
int Str_compare(const char string1[], const char string2[]);

/*-----------------------------------------------------------------*/
/* finds the first instance of string2 in string1 and returns a 
pointer to first character of found string2 in string1*/
char* Str_search(const char string1[], const char string2[]);

#endif