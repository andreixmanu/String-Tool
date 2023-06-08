#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "string.h"

void menu_3(){
    printf("\nPlease write the string:\n");

    char temp[100];
    scanf("%s", temp);

    printf("\nThe string you wrote is %s, is it correct? (Y/N)\n", temp);

    char option;
    scanf(" %c", &option);

    if(option == 'Y' || option == 'y') {
        printf("What do you want to do with the string?\n"
               "1. Just reverse it\n"
               "2. Reverse and save it\n");
        char option2;
        scanf(" %c", &option2);

        unsigned long long length = strlen(temp);
        switch (option2) {
            case '1':
                reverseString(temp);
                printf("The string reversed is %s\n", temp);
                return_to_menu();
                break;
            case '2':
                reverseString(temp);
                printf("The string reversed is %s\n", temp);
                pasteString(temp);
                break;
            default:
                printf("Selection not valid\n");
                menu_3();
        }

    } else if(option == 'n' || option == 'N'){
        menu_3();
    } else{
        printf("\nAnswer not valid.\n");
        menu_3();
    }
}

void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
void reverseStringRecursive(char* str, int start, unsigned long long end) {
    // Base case: string has been fully reversed
    if (start >= end) return;
    // Swap characters at start and end indices
    swap(&str[start], &str[end]);
    // Recursively reverse the substring excluding the swapped characters
    reverseStringRecursive(str, start + 1, end - 1);
}

void reverseString(char *string) {
    int length = strlen(string);
    int i = 0, j = length - 1;

    while (i < j) {
        char temp = string[i];
        string[i] = string[j];
        string[j] = temp;
        i++;
        j--;
    }
}