#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ex. 27 solution 1

int main(void) {
    int n;
    scanf("%d", &n);
    //top
    for (int i = n; i >= 1; i--) {

        //white space for top
        for (int k = i; k < n; k++) {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    //bottom
    for (int i = 2; i <= n; i++) {

        //white space for bottom
        for (int k = i; k < n; k++) {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}