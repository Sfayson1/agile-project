#include <stdio.h>
#include "fileWrite.h"

void writeFile(void) {
    FILE *file = fopen("data.txt", "w");
    char text[200];

    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    // Clear leftover newline from previous scanf
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}

    printf("Enter text to save: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);
    fclose(file);

    printf("Saved successfully.\n");
}

