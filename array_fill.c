#include <stddef.h> // For NULL

/**
 * TODO: Describe what the function does
 */
int array_fill(int* array, int array_len, int begin, int end) {
    if (array == NULL || array_len <= 0){
        return 0;
    }
    int count = 0;
    for (int i = begin; i <= end; i++){
        if (count == array_len){
            break;
        } 
        array[count] = i;
        count++;
    }
    return count;
}
