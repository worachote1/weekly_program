#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int i = 0;
int a = 1;
int calculate(char* x) {
    a *= (int)x[i] - '0';
    i += 1;
    if (i <= 2) {
        calculate(x);
    }
    return a;
}
//Ex 15 solution 2 using recursive
int main(void) {
    char s[3];
    scanf("%s", s);
    printf("%c.%c.%c = %d", s[0], s[1], s[2], calculate(s));

    return 0;
}