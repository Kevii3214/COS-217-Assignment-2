#ifndef STR_INCLUDED
#define STR_INCLUDED
#include <stddef.h>
/*-----------------------------------------------------------------*/
/* return length of string string, not including the trailing '\0'. */
size_t Str_getLength(const char string[]);

/*-----------------------------------------------------------------*/
/* return string 1 after copying string2 onto string1 */
char* Str_copy(char string1[], const char string2[]);

/*-----------------------------------------------------------------*/
/* return string1 after concatanating string2 to the end of string1*/
char* Str_concat(char string1[], const char string2[]);

/*-----------------------------------------------------------------*/
/* returns the comparison of string1 to string2 lexicographically */
int Str_compare(const char string1[], const char string2[]);

/*-----------------------------------------------------------------*/
/* returns a pointer to first character of found string2 in string1 
by finding the first instance of string2 in string1*/
char* Str_search(const char string1[], const char string2[]);

#endif