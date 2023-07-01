#include <stdio.h>

/**
 * When you create a variable, it exists in memory. What if you want to story many
 * values of some type, for example, 100 integers? You *could* create 100 integer
 * values...
 * 
 *      int var1 = 1;
 *      int var2 = 2;
 *      // ...
 *      int var100 = 100;
 * 
 * But C has a better way. You can store values in memory *right next to each other*,
 * and use a single variable to represent all of those values; this is an "array" in C.
 * You access each value in an array by "indexing" each value; in this context, "indexing"
 * simply means "requesting the value in the 'nth' position in the array". There's one 
 * complication that trips up all new programmers: array indices start at 0, **not** 1!
 * 
 * The following C code creates a an integer array of length 3, and prints the first value.
 * 
 *      int array[] = {1,2,3};
 *      printf("The first value of array is %d\n", array[0]);
 * 
 * References:
 * [1] https://www.cs.uic.edu/~jbell/CourseNotes/C_Programming/Arrays.html
 */

int main(int arc, char* argv[]) {

    // Arrays can be explicitly sized...
    int list1[3] = {1, 2, 3};

    // ...or, the size can be inferred by the compiler.
    int list2[] = {1, 2, 3};

    // If you specify a size that is *larger* than the number of 
    // values you provide, the uninitialized places in memory will 
    // be set to zero. 
    int list3[100] = {1, 2, 3}; // allocates memory for 100 integers; the last 97 are set to zero.
    printf("The fourth element of list3: list3[3] = %d\n", list3[3]);

    // If you specify a size that is *smaller* than the number of 
    // values you provide, the compiler will ignore the size you 
    // provided, and allocate an array that fits all of the values
    // you provided. 
    int list4[1] = {1, 2, 3};
    printf("list4 has a length of 3: [%d, %d, %d]\n", list4[0], list4[1], list4[2]);

    // You can also declare the array first with "uninitialized" 
    // memory, then fill in the values later.
    int list5[100];
    for (int i = 0; i < 100; i++) {
        list5[i] = i + 1;
    }

    /**
     * Arrays have a finite size. Reading or writing outside of the bounds of the 
     * array is "undefined behavior". With this in mind, fix the bug in the code 
     * below. 
     */
    int fix_me[] = {1,2,3,4,5};

    printf(
        "The values of fix_me are: [%d, %d, %d, %d, %d, %d]\n", 
        fix_me[0], fix_me[1], fix_me[2], fix_me[3], fix_me[4], fix_me[5]
    );

}