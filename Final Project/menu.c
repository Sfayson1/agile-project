#include <stdio.h>
#include "menu.h"

int showMenu(void) {
    int choice;

    printf("\n===== MAIN MENU =====\n");
    printf("1. Write to File\n");
    printf("2. Read from File\n");
    printf("3. Calculation 1\n");
    printf("4. Calculation 2\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");

    scanf("%d", &choice);
    return choice;
}



