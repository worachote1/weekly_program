#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
    //Ex.21 solution 1
    int n;
    //Enter number of row
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}