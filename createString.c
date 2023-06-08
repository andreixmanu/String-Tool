//
// Created by manua on 07/06/2023.
//
#include "stdio.h"
#include "functions.h"
#include "stdlib.h"
#include "string.h"

void menu_1(){

    printf("\nPlease write the string:\n");

    char temp[100];
    scanf("%s", temp);

    printf("\nThe string you wrote is %s, correct? (Y/N)\n", temp);

    char option;
    scanf(" %c", &option);

    if(option == 'Y' || option == 'y'){
        unsigned long long length = strlen(temp);
        char *string = malloc((length+1) * sizeof(char));
        strcpy(string, temp);
        pasteString(string);
    } else if (option == 'N' || option == 'n'){
        menu_1();
    } else {
        printf("\nAnswer not valid.\n");
        menu_1();
    }
}

void pasteString(char *string){
    FILE *file = fopen("./strings.txt", "a");
    if(file == NULL){
        perror("Error while opening file\n");
        return;
    } else {
        printf("Now pasting string %s.\n", string);
        fprintf(file, "\n%s", string);
    }
    printf("Paste successful.\n");
    fclose(file);

    return_to_menu();
}