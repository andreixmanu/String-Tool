//
// Created by manua on 08/06/2023.
//

#include "functions.h"
#include "stdio.h"

void saveString(int choice, char *string){
    if(choice == 1)
        pasteString(string);
    else if(choice == 0){
        printf("Do you want to save the string %s?(Y/N)\n", string);
        char option;
        scanf(" %c", &option);
        if(option == 'y' || option == 'Y') {
            pasteString(string);
        }
        else return_to_menu();
    }
}