#include <stdio.h>

/**
 * Integers come in many flavors in C! There are signed and unsigned integers, 
 * short and long integers, and characters. Try to fix the code below to get 
 * it to compile. When it does, you'll see the limits for each integer type,
 * and what happens when you exceed the bounds of each type.
 */

int main(int argc, char* argv[]) {
    
    /**
     * Change the answers below so that they match the printed values!
     * Confused? Try running the program first, and see how the output
     * differs from the "answers" variable. 
     * 
     * What are the limits for each data type? Note that if you exceed 
     * the limits for any integer type, the value will "wrap around" to
     * the opposite extreme.
     * 
     * Take the "char" value for example. The initial char value is 129,
     * but char types have a minimum of -128, and a maximum of 127. What
     * happens when you assign the value "129" to a char?
     */
    
    long long int answers[] = {
        129,                // char
        -1,                 // unsigned char
        33333,              // short int
        55555,              // unsigned short int
        1234567,            // int
        -1,                 // unsigned int
        12345678999,        // long int
        12345678999,        // unsigned long int
        -1234567899999999,  // long long int
        1234567899999999,   // unsigned long long int
    };

    /**
     * Don't change anything below this line!
     */

    char index = 0;
    char tiny = answers[index++];
    unsigned char tiny_and_positive = answers[index++];

    short int small = answers[index++];
    unsigned short int small_and_positive = answers[index++];
    
    int medium = answers[index++]; 
    unsigned int medium_and_positive = answers[index++];

    long int large = answers[index++]; 
    unsigned long int large_and_positive = answers[index++];

    long long int gargantuan = answers[index++];
    unsigned long long int gargantuan_and_positive = answers[index++];

    printf("char tiny\t\t\t=\t%hhd\n", tiny);
    printf("unsigned char tiny\t\t=\t%hhu\n", tiny_and_positive);
    printf("short int small\t\t\t=\t%hd\n", small);
    printf("unsigned short int small\t=\t%hu\n", small_and_positive);
    printf("int medium\t\t\t=\t%d\n", medium);
    printf("unsigned int medium\t\t=\t%u\n", medium_and_positive);
    printf("long int large\t\t\t=\t%ld\n", large);
    printf("unsigned long int large\t\t=\t%lu\n", large_and_positive);
    printf("long long int gargantuan\t=\t%lld\n", gargantuan);
    printf("unsigned long long int wild\t=\t%llu\n", gargantuan_and_positive);

    return 0;

}