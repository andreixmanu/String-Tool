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

void menu_4();