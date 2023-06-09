//
// Created by manua on 08/06/2023.
//

#include "string.h"
#include "stdio.h"
#include "functions.h"

void menu_4() {

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

}
