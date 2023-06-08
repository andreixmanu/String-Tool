//
// Created by andreixmanu on 08/06/23.
//

#include "functions.h"
#include <stdio.h>

unsigned long long line_counter(FILE *file){

    unsigned long long cnt = 1;
    char ch;

    while((ch = fgetc(file)) != EOF){
        if(ch == '\n')
            cnt++;
    }
    return cnt;
}