#include <stdio.h>

/**
 * There are many similarities between arrays and pointers in C. When 
 * you create an array variable, that variable is equivalent to the memory
 * address to the *start* of the array. This means you can use the array 
 * variable like a pointer!
*/

int main(int argc, char* argv[]) {

    int integer_array[] = {1, 2, 3};
    int* array_address = integer_array + 2;

    /**
     * Unccomment "// integer_array" immediately below, and change the index 
     * to make the printed statement "true".
     */
    int value = -1;
    // value = integer_array[...];

    printf("%d == %d\n", array_address[-1], value);
    
    return 0;
}