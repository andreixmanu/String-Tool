//
// Created by andreixmanu on 09/06/23.
//

#include "functions.h"
#include <stdio.h>

void menu_7() {
    const char* original_file_name = "strings.txt";
    const char* new_file = "strings.txt";

    if (remove(original_file_name) != 0) {
        printf("Error resetting the file.\n");
        return;
    }

    FILE* newFile = fopen(new_file, "w");
    if (newFile == NULL) {
        printf("Error Resetting the file.\n");
        return;
    }

    fclose(newFile);

    printf("Strings reset successfully\n");

}
