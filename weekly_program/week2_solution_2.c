#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num[4] = { 0 };
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 4; i++) {
        if (num[i] % 2 == 0) {
            sum += 1;
        } 
    }
    printf("%d", sum);
    return 0;
}