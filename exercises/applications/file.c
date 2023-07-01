#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    FILE* file = fopen("file.txt", "w");

    if (file == NULL) {
        perror("Unable to write file.\n");
    } else {
        fclose(file);
    }
    
    return 0;
}