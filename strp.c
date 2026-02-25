#include <stdio.h>
#include <ctype.h>
#include <assert.h>

size_t Str_getLength(const char *stringPointerStart)
{
   const char *stringPointerEnd;
   assert(stringPointerStart != NULL);
   stringPointerEnd = stringPointerStart;
   while (*stringPointerEnd != '\0')
      stringPointerEnd++;
   return (size_t)(stringPointerEnd - stringPointerStart);
}

char* Str_copy(char *string1, const char *string2) {
    char *string1Start = string1;
    assert(string1 != NULL);
    assert(string2 != NULL);
    while (*string2 != '\0') {
        *string1 = *string2;
        string1++;
        string2++;
    }
    /* updates the null pointer to end string 1*/
    *string1 = '\0';
    return string1Start;
}

char* Str_concat(char *string1, const char *string2) {
    /* to prevent magic numbers */
    char *string1Start = string1;
    assert(string1 != NULL);
    assert(string2 != NULL);
    while (*string1 != '\0') {
        string1++;
    }
    while (*string2 != '\0' ) {
        *string1 = *string2;
        string1++;
        string2++;
    }
    /* updates null pointer to end of string1*/
    *string1 = '\0';
    return string1Start;
}

int Str_compare(const char *string1, const char *string2) {
    assert(string1 != NULL);
    assert(string2 != NULL);
    while (*string1 == *string2 && *string1 
        != '\0' && *string2 != '\0') {
        /* characters are the same, move on to next character*/
        string1++; 
        string2++;
    }
    /* +charint intentional char cast for ASCII conversion */
    return (int) ((unsigned char) *string1 - (unsigned char)
     *string2);
}

char* Str_search(const char string1[], const char string2[]) {
    const char *tempString1;
    const char *tempString2;
    assert(string1 != NULL);
    assert(string2 != NULL);
    if (*string2 == '\0') {
        /* cast is for getting rid of const*/
        return (char *) string1;
    }
    while (*string1 != '\0') {
        tempString1 = string1;
        tempString2 = string2;
        while (*tempString1 == 
            *tempString2 && *tempString2 != 
            '\0') {
            tempString1++;
            tempString2++;
        }
        if (*tempString2 == '\0') {
            /* cast is for getting rid of const */
            return (char *) string1;
        }
        string1++;
    }
    return NULL;
}