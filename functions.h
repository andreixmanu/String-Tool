//
// Created by manua on 07/06/2023.
//

#include <stdio.h>

void mainMenu();
void return_to_menu();
void saveString(int choice, char *string);
unsigned long long line_counter(FILE *file);

//create string
void menu_1();
void pasteString(char *string);

//view strings
void menu_2();

//reverse string
void menu_3();
void swap(char* a, char* b);
void reverseStringRecursive(char* str, int start, unsigned long long end);
void reverseString(char *string);

//concatenate strings
void menu_4();

//delete string
//ABANDONED
void menu_5();
void delete_string_by_name(char *string);
void delete_string_by_id(int id);

//check length of a string
void menu_6();
unsigned int check_length(const char *string);

//reset file
void menu_7();