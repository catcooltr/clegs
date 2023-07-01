#include <stdio.h>

/**
 * As a programmer, you can allocate memory in two broad ways: on the "stack",
 * or on the "heap". In general, stack-allocated memory is memory allocation
 * that is inferred by the compiler, and allocated within some scope; this is 
 * also known as "static" memory allocation. Heap-allocated memory is memory 
 * allocation that is explicitly requested by C code; this is also known as 
 * "dynamic" memory allocation.
*/

/**
 * @brief This function is bad! It creates a variable, then returns an address
 * to that variable. The problem is, as soon as this function ends, the 
 * `stack_allocated` variable ceases to exist. So the memory address is pointing
 * to unallocated memory!
 * 
 * Your task: fix this function definition by returning an `int` value, **not** a
 * a `int*`. You'll also need to remove the `*` character "de-referencing" the 
 * output of `onstack` in the main function.
*/
int* onstack() {
    int stack_allocated = 0;

    return &stack_allocated;
}

int main(int argc, char* argv[]) {

    int x = *onstack();

    printf("The value of x is: %d\n", x);

    return 0;
}