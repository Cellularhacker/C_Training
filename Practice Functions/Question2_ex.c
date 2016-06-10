/*
* Date: 2016-06-10
* Title: Example for Question1 at C_Training
* Filename: Question2_ex.c
* Lisence: GNU GENERAL PUBLIC LICENSE Version 3
* Written by Celluarhacker
*/
#include <stdio.h>

int AAA(int x, int y);

int main() {
    int x, y;
    printf("Input two integer: ");

    scanf("%d %d", &x, &y);

    printf("Area of Rectangle: %d", AAA(x, y));

    return 0;
}

int AAA(int x, int y) {
    return x*y;
}