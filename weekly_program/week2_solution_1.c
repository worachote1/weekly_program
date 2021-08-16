#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    //EX.9 solution 1
    int a, b, c, d, sum = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a % 2 == 0) {
        sum += 1;
    }
    if (b % 2 == 0) {
        sum += 1;
    }
    if (c % 2 == 0) {
        sum += 1;
    }
    if (d % 2 == 0) {
        sum += 1;
    }
    printf("%d", sum);
    return 0;
}