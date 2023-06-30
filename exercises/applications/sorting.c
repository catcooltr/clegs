#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * @brief Return the provided string in all lowercase.
 * 
 * @param string 
 * @return char* 
 */
char* to_lower(char* string) {

    size_t length = strlen(string);
    char* copy = malloc(sizeof(char) * length);
    strcpy(copy, string);

    for (int i = 0; i < strlen(copy); i++) {
        if (copy[i] >= 'A' || copy[i] <= 'Z') {
            copy[i] -= 32;
        }
    }

    return copy; // TODO: fix me!
}

/**
 * @brief Compare two strings alphabetically.
 * 
 * Return 0 if strings are alphabetically identical (case insensitive).
 * Return +1 if `str1` is alphabetically "less than" `str2`.
 * Return -1 if `str1` is alphabetically "greater than" `str2`.
 * 
 * Example: compare_ASCII("A","B") == -1;
 * 
 * @param str1 
 * @param str2 
 * @return int 
 */
int compare_ASCII(char* str1, char* str2) {

    char* lower1 = to_lower(str1);
    char* lower2 = to_lower(str2);

    return strcmp(lower1, lower2);
}


/**
 * @brief Return a sorted array of the provided strings.
 * 
 * @param strings 
 * @param lines_count 
 * @return char** 
 */
char** sort(char** strings, size_t lines_count) {

    char** copy_list = malloc(sizeof(char*) * lines_count);

    char* highest = "!";
    
    int highest_index = 0;
    for (int i = 0; i < lines_count; i++) {
        for (int j = 0; j < lines_count; j++) {
            if (compare_ASCII(highest, strings[j]) == 1) {
                highest = strings[j];
                highest_index = j;
            }
        }
        //copy_list[lines_count - i] = highest; // greatest to least
        copy_list[i] = highest; // least to greatest
        strings[i] = " ";
    }

    return copy_list;
}


int main(int argc, char* argv[]) {

    FILE* source;
    FILE* destination;

    const int MAX_LENGTH = 50;
    const int MAX_LINES = 100;
    
    char** lines = malloc(sizeof(char*) * MAX_LINES);
    int lines_filled = 0;

    source = fopen("../data/states.txt", "r");
    if (source == NULL) {
        perror("Unable to open source file!");
        return 1;
    }

    destination = fopen("../data/sorted.txt", "w");
    if (destination == NULL) {
        perror("Unable to open destination file!");
        return 1;
    }

    printf("Reading source file!\n");

    char line[50];
    while (fgets(line, MAX_LENGTH, source) != NULL) {
        if (lines_filled == MAX_LINES) {
            perror("Maximum lines have been filled!; Exiting loop.");
            break;
        } else {
            lines[lines_filled] = line;
            lines_filled++;
        }
    }
    fclose(source);
    
    printf("Sorting!\n");
    char** sorted = sort(lines, lines_filled);

    printf("Writing destination file!\n");
    for (int i = 0; i < lines_filled; i++) {
        printf("%s\n", sorted[i]);
        fprintf(destination, "%s\n", sorted[i]);
    }
    fclose(destination);


    return 0;
}