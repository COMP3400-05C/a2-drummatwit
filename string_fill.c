#include <stddef.h> // For NULL

/**
 * Fills a character array with character c
 * It leaves space for null terminator at the end. 
 */
void string_fill(char dest[], int dest_cap, char c) {
    if (dest == NULL ){
        return;
    }
    if (dest_cap == 0){

    } else if (dest_cap == 1){
        dest[0] = '\0';
        return;
    } else {
        for (int i= 0; i < dest_cap - 1; i++){
            dest[i] = c;
        }
        dest[dest_cap - 1] = '\0'; 
    }

}
