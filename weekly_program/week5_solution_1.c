#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
    //Ex. 25 solution 1

    //number of row
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int m = n - i; m >= 1; m--)
        {
            printf(" ");
        }

        for (int j = 1; j <= ((i * 2) - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}