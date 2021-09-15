#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
    //Ex 26 solution 1
    int n;
    scanf("%d", &n);
    //top row
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        for (int k = 1; k < 2 * (n - i); k++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    //mid row
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        printf("*");
    }
    printf("\n");
    //bottom row
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        for (int k = 1; k < 2 * (n - i); k++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}