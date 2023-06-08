#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverseStringRecursive(char* str, int start, int end) {
    if (start >= end) {
        return;  // Base case: string has been fully reversed
    }

    // Swap characters at start and end indices
    swap(&str[start], &str[end]);

    // Recursively reverse the substring excluding the swapped characters
    reverseStringRecursive(str, start + 1, end - 1);
}

