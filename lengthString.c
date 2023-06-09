//
// Created by andreixmanu on 09/06/23.
//

#include <stdio.h>
#include "functions.h"


void menu_6(){
    printf("Please write the string:\n");

    char string[100];
    scanf(" %s", &string);

    printf("Is the string %s correct?(y/n)\n", string);
    char option;
    scanf(" %c", &option);

    if(option == 'y' || option == 'Y'){
        printf("The length of your string is %d\n", check_length(string));
        saveString(0, string);
    } else if (option == 'n' || option == 'N'){
        menu_6();
    } else{
        printf("Please insert a valid option.\n");
        menu_6();
    }
}

unsigned int check_length(const char *string){
    unsigned cnt = 0, i = 0;
    char ch;

    while((ch = string[i]) != '\0'){
        cnt++;
        i++;
    }
    return cnt;
}
