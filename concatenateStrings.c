//
// Created by manua on 08/06/2023.
//

#include "string.h"
#include "stdio.h"
#include "functions.h"

void menu_4() {
    printf("Do you want to concatenate two new strings (1) or two old strings (2)?\n");

    char option;
    scanf(" %c", &option);

    if (option == '1') {
        printf("Write the first string:\n");
        char string1[100];
        scanf(" %s", string1);

        printf("Write the second string:\n");
        char string2[100];
        scanf(" %s", string2);

        char result[200];
        strcpy(result, string1);
        strcat(result, string2);

        printf("The concatenated string is %s\n", result);

        saveString(0, result);

    } else if (option == '2') {
        // TODO
        printf("Coming soon...\n");
        menu_4();
    } else {
        printf("Selection not valid.\n");
        menu_4();
    }
}
