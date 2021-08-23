#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//Ex 15 solution 1
int main(void) {
    char s[3];
    scanf("%s", s);
    //printf("%c",s[2]);
    int a = 1;
    for (int i = 0; i < 3; i++) {
        printf("%c", s[i]);
        if (i < 2) {
            printf(".");
        }
        a *= (int)s[i] - '0';
    }
    printf(" = %d", a);
    return 0;
}