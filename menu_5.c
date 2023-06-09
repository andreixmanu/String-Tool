//
// Created by andreixmanu on 09/06/23.
//

#include "functions.h"
#include <stdio.h>

void menu_5(){
    printf("Do you want to search by name(1) o insert its n. of line(2)?\n");
    int option2;
    scanf(" %d", &option2);

    if(option2 == 1){
        printf("What is the string you want to delete?\n");

        char string[100];
        scanf(" %s", &string);

        printf("Is the string %s correct?(y/n)\n", string);
        char option;
        scanf(" %c", &option);

        if(option == 'y' || option == 'Y'){
            delete_string_by_name(string);
        } else if(option == 'n' || option == 'N'){
            menu_6();
        } else{
            printf("Please select a valid option.\n");
            menu_5();
        }
    } else if (option2 == 2){

        printf("In which line is the string located?\n");
        int id;
        scanf(" %d", &id);

        //check if id is valid
        FILE *file = fopen("./strings.txt", "r");
        if(id <= line_counter(file)){
            printf("Are you sure you want to delete the string at line %d?(y/n)", id);
        } else {
            printf("The line is not valid, please select a valid line.\n");
            menu_5();
        }
        fclose(file);

        char option3;
        scanf(" %c", &option3);

        if(option3 == 'y' || option3 == 'Y'){
            delete_string_by_id(id);
        } else if(option3 == 'n' || option3 == 'N'){
            menu_5();
        } else {
            printf("Please select a valid option");
            menu_5();
        }
    }


}

void delete_string_by_name(char *string){

}

void delete_string_by_id(int id){
    FILE *file = fopen("./strings.txt", "w");
    char ch;
    int cnt = 0, i = 0;
    while((ch = fgetc(file)) != EOF && cnt != id){
        if(ch == '\n')
            cnt++;
    }

    //this should never execute, as the checking above should prevent it
    if(ch == EOF){
        printf("ERROR: line not found\n");
    }


    fclose(file);
}