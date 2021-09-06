#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int x = 1;
void printStar(int c)
{
    for (int m = c - x; m >= 1; m--)
    {
        printf(" ");
    }

    for (int j = 1; j <= ((x * 2) - 1); j++)
    {
        printf("*");
    }
    printf("\n");

    x += 1;
    if (x <= c)
    {
        printStar(c);
    }
}

int main(void) {

    //Ex. 25 solution 2

    //number of row
    int n;
    scanf("%d", &n);

    printStar(n);

    return 0;
}