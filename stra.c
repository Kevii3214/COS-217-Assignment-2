#include <stdio.h>
#include <stddef.h>
#include <ctype.h>
#include <assert.h>

size_t Str_getLength(const char string[])
{
   size_t length = 0;
   assert(string != NULL);
   while (string[length] != '\0')
      length++;
   return length;
}

char* Str_copy(char string1[], const char string2[]) {
    size_t string2Index = 0;
    assert(string1 != NULL);
    assert(string2 != NULL);
    while (string2[string2Index] != '\0') {
        string1[string2Index] = string2[string2Index];
        string2Index++;
    }
    /* updates the null pointer to end string 1*/
    string1[string2Index] = string2[string2Index];
    return string1;
}

char* Str_concat(char string1[], const char string2[]) {
    size_t endOfString1 = Str_getLength(string1);
    size_t string2Indexer = 0;
    assert(string1 != NULL);
    assert(string2 != NULL);
    while (string2[string2Indexer] != '\0' ) {
        string1[endOfString1++] = string2[string2Indexer++];
    }
    /* updates null pointer to end of string1*/
    string1[endOfString1] = '\0';
    return string1;
}

int Str_compare(const char string1[], const char string2[]) {
    size_t indexer = 0;
    assert(string1 != NULL);
    assert(string2 != NULL);
    while (string1[indexer] == string2[indexer] && string1[indexer] 
        != '\0' && string2[indexer] != '\0') {
        /* characters are the same, move on to next character*/
        indexer++; 
    }
    return (unsigned char) string1[indexer] - (unsigned char)
     string2[indexer];
}

char* Str_search(const char string1[], const char string2[]) {
    size_t string1Indexer = 0;
    assert(string1 != NULL);
    assert(string2 != NULL);
    while (string1[string1Indexer] != '\0') {
        size_t string2Indexer = 0;
        while (string1[string1Indexer + string2Indexer] == 
            string2[string2Indexer] && string2[string2Indexer] != 
            '\0') {
            string2Indexer++;
        }
        if (string2[string2Indexer] == '\0') {
            return &string1[string1Indexer];
        }
        string1Indexer++;
    }
    return NULL;
}