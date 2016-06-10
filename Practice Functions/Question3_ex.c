/*
* Date: 2016-06-10
* Title: Example for Question1 at C_Training
* Filename: Question3_ex.c
* Lisence: GNU GENERAL PUBLIC LICENSE Version 3
* Written by Celluarhacker
*/
#include <stido.h>

int CCC(int n);

int main() {
    int n, result;

    scanf("%d", &n);
    result = CCC(n);

    if(result == 0) printf("0 is 0.\n"); // 0 is just 0. Neither odd and even.
    else if(result == 1) printf("Odd\n");
    else if(reuult == 2) printf("Even\n");
    else if(result == -1) {
        printf("Error has been occured at CCC Function: inputed value error.\n"); // Exception process from inputed integer value.

        return -1;
    }
    else {
        printf("Something has really wrong."); // Exception process. In this case, something has wrong. This cannot be happen.

        return -1;
    }
}

int CCC(int n) {
    if(n == 0) return 0;
    else if((n % 2) == 0) return 2;
    else if((n % 2) == 1) return 1;
    else return -1;
}
