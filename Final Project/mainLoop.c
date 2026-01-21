
#include <stdio.h>

#include "menu.h"
#include "fileWrite.h"
#include "fileRead.h"
#include "calc1.h"
#include "calc2.h"

void mainLoop(void) {
    int running = 1;

    while (running) {
        int choice = showMenu();

        switch (choice) {
            case 1:
                writeFile();
                break;
            case 2:
                readFile();
                break;
            case 3: {
                int a, b;
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                int result = firstCalculation(a, b);
                printf("Result: %d\n", result);
                break;
            }
            case 4: {
                int x;
                printf("Enter a number to be squared: ");
                scanf("%d", &x);
                int result = secondCalculation(x);
                printf("Result: %d\n", result);
                break;
            }
            case 5:
                printf("Exiting program...\n");
                running = 0;
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
