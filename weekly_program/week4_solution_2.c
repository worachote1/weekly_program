#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int x = 1;
void printStar(int c) {
    for (int i = 0; i < c; i++) {
        printf("*");
    }
    printf("\n");
    x += 1;
    if (x <= c) {
        printStar(c);
    }
}
int main(void) {
    //Enter number of row 
    int n;
    scanf("%d", &n);
    printStar(n);
    return 0;
}