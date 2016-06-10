/*
* Date: 2016-06-10
* Title: Example for Question1 at C_Training
* Filename: Question1_ex.c
* Lisence: GNU GENERAL PUBLIC LICENSE Version 3
* Written by Celluarhacker
*/
#include <stido.h>
#include <math.h>

void Circle(double r);

int main() {
    double r;

    printf("Radius of Circle: ");
    scanf("%lf", &r);
    Circle(r);

    return 0;    
}

void Circle(double r) {
    printf("width of Circle: %f", r * r * PI); //PI is defined in <math.h>
}