#include <stddef.h> // For NULL
#include <ctype.h>
#include <stdlib.h>
// TODO: Include any necessary header files here

/**
 * Takes string s and returns a dynamically 
 * changed string which all letters are uppercase
 */
char* capitalize(const char* s) {
    if (s == NULL){
        return NULL;
    }

    int length = 0;
    while (s[length] != '\0') {
        length++;
    }

    char* result = (char*) malloc(sizeof(char) * (length + 1));
    if (result == NULL){
        return NULL;
    }

    for (int i = 0; i < length; i++) {
        result[i] = toupper((unsigned char)s[i]);
    }
    result[length] = '\0';
    return result; 
    
}

