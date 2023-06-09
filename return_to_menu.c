//
// Created by manua on 08/06/2023.
//

#include "functions.h"
#include "stdio.h"

void return_to_menu(){

    printf("\n\nDo you want to do anything else? (y/n)\n");

    char selection;
    scanf(" %c", &selection);


    if(selection == 'Y' || selection == 'y')
        mainMenu();
    else if(selection == 'N' || selection == 'n'){
        printf("Thank you for using the Ultimate String Tool 9000\n");
        return;
    } else {
        printf("Selection not valid.\n");
        return_to_menu();
    }
}