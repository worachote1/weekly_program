#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int a = 1;
int j1 = 1;
int j2 = 1;
void printTop(int j) {
    if (j <= a) {
        printf("*");
        j += 1;
        printTop(j);
    }
}

void top(int n) {
    if (j1 <= a) {
        printTop(j1);
    }
    for (int k = 1; k < 2 * (n - a); k++) {
        printf(" ");
    }
    if (j2 <= a) {
        printTop(j2);
    }
    printf("\n");
    a += 1;
    if (a < n) {
        top(n);
    }
}

int b = 1;
void mid(int n) {
    if (b <= (2 * n) - 1) {
        printf("*");
        b += 1;
        mid(n);
    }
    // printf("\n");
}


int j3 = 1;
int j4 = 1;
int c;
int getC(int n) {
    return c = n - 1;
}
void printBottom(int j) {
    if (j <= c) {
        printf("*");
        j += 1;
        printBottom(j);
    }
}
void bottom(int n) {
    if (j3 <= c) {
        printBottom(j3);
    }
    for (int k = 1; k < 2 * (n - c); k++) {
        printf(" ");
    }
    if (j4 <= c) {
        printBottom(j4);
    }
    printf("\n");
    c -= 1;
    if (c >= 1) {
        bottom(n);
    }
}

int main(void) {
    //ex. 26 solution 2
    int n;
    scanf("%d", &n);
    top(n);
    mid(n);

    printf("\n");
    getC(n);
    bottom(n);
    return 0;
}