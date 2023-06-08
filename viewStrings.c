//
// Created by manua on 08/06/2023.
//
#include "stdio.h"
#include "functions.h"
#include "stdlib.h"
#include "string.h"

void menu_2(){
    FILE *file = fopen("./strings.txt", "r");
    if(file == NULL){
        perror ("Error while opening file");
        fclose(file);
        return;
    }

    //get the file size
    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    fseek(file, 0, SEEK_SET);

    //allocate buffer memory to store the file data
    char *buffer = (char*)malloc(file_size);
    if(buffer == NULL){
        perror("Error while allocating buffer memory");
        fclose(file);
        return;
    }

    // Read the file data into the buffer
    size_t bytes_read = fread(buffer, 1, file_size, file);
    if(bytes_read != file_size){
        perror("Error while reading file");
        fclose(file);
        free(buffer);
        return;
    }

    //print data on terminal
    printf("\nYour strings:\n\n%s", buffer);

    //clean up
    fclose(file);
    free(buffer);

    printf("Do you want to do anything else? (Y/N)\n");
    char option;
    scanf(" %c", option);
    if(option == 'Y' || option == 'y')
        mainMenu();
    else{
        printf("Thank you for using the Ultimate String Tool 9000\n");
        return;
    }
}