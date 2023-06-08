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
           "5. Delete a string\n"
           "6. Check string length\n\n");

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
            //create function
            break;
        case 5:
            //create function
            break;
        case 6:
            //create function
            break;
        default:
            printf("\nU stoopid");
            break;
    }


}