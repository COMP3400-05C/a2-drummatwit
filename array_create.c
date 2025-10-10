#include <stddef.h> // For NULL
#include <stdlib.h>


/**
 * Creates and retuens a dynamically allocated array of 
 * even integers from begin to end inclusive
 */
int* array_create_evens(int begin, int end) {
    if (begin > end){
        return NULL;
    }
    if (begin % 2 != 0){
        begin++;
    }
    if (end % 2 != 0){
        end--;
    }
    if (begin > end){
        return NULL;
    }
    int count = ((end - begin) / 2) + 1;
    int* evens = malloc(count * sizeof(int));
    if (evens == NULL){
        return NULL;
    }
    for (int i = 0; i < count; i++){
        evens[i] = begin + (i *2);
    }
    return evens; 
}
