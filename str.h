#include <stdio.h>
#include <ctype.h>

size_t Str_getLength(const char pcSrc[])
{
   size_t uLength = 0;
   assert(pcSrc != NULL);
   while (pcSrc[uLength] != '\0')
      uLength++;
   return uLength;
}

static void Str_copy(char string1[], const char string2[]) {
    int string2Index = 0;
    while (string2[string2Index] != '\0') {
        string1[string2Index] = string2[string2Index];
        string2Index++;
    }
    /* updates the null pointer to end string 1*/
    string1[string2Index] = string2[string2Index];
}

static void Str_concat(char string1[], const char string2[]) {
    int endOfString1 = Str_getLength(string1);
    int string2Indexer = 0;
    while (string2[string2Indexer] != '\0' ) {
        string1[endOfString1++] = string2[string2Indexer++];
    }
    /* updates null pointer to end of string1*/
    string1[endOfString1++] = string2[string2Indexer++];

}

int Str_compare(const char string1[], const char string2[]) {
    int indexer = 0;
    while (string1[indexer] == string2[indexer] && string1[indexer] 
        != '\0' && string2[indexer] != '\0') {
        /* characters are the same, move on to next character*/
        indexer++; 
    }
    return (int) string1[indexer] - (int) string2[indexer];
}

char* Str_search(const char string1[], const char string2[]) {
    int string1Indexer = 0;
    int string2Indexer = 0;
    int string2Length = Str_getLength(string2);
    while (string1[string1Indexer] != '\0') {
        if (string2Indexer == string2Length) {
            return string1[string1Indexer]*;
        }
        if (string1[string1Indexer] == string2[string2Indexer]) {
            string2Indexer++;
        }
    }
}