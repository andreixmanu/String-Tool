//
// Created by manua on 07/06/2023.
//

#include "functions.h"

void mainMenu(){

    printf("What operation would you like to do? (Please write the number)\n\n");
    printf("1. Create a new string\n"
           "2. View your strings\n"
           "3. Reverse one of your strings\n"
           "4. Concatenate two strings\n"
           "5. Check string length\n"
           "6. Reset all\n\n");

    int option;
    scanf("%d", &option);
    //printf("Your choice is %d", option);
    switch(option){
        case 1:
            menu_1();
            break;
        case 2:
            menu_2();
            break;
        case 3:
            menu_3();
            break;
        case 4:
            menu_4();
            break;
        case 5:
            menu_6();
            break;
        case 6:
            menu_7();
        default:
            printf("\nPlease select a valid option.\n");
            mainMenu();
    }


}