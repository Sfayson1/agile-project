#include <stdio.h>
#include "fileRead.h"

void readFile(void) {
    FILE *file = fopen("data.txt", "r");
    char text[200];

    if (!file) {
        printf("File not found. Write to the file first.\n");
        return;
    }

    printf("\n--- File Contents ---\n");
    while (fgets(text, sizeof(text), file)) {
        printf("%s", text);
    }

    fclose(file);
}

