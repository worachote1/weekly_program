#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

//EX. 22 solution 2

int main() {
    int num;
    scanf("%d", &num);
    if (num >= 0) {
        if (num % 2 != 0) {
            for (int i = 1; i <= (num - 1) / 2; i++) {      // TOP
                for (int j = 1; j <= ((num + 1) / 2) - 1; j++) printf("* ");
                printf("*\n");
                for (int j = 1; j <= ((num + 1) / 2) - 1; j++)printf(" *");
                printf("\n");
            }
            for (int i = 1; i <= ((num + 1) / 2) - 1; i++) printf("* ");     // BOTTOM
            printf("*");
        }
        else {
            for (int i = 1; i <= num / 2; i++) {      // TOP
                for (int j = 1; j <= ((num) / 2) - 1; j++) printf("* ");
                printf("*\n");
                for (int j = 1; j <= ((num) / 2) - 1; j++)printf(" *");
                printf(" *");
                if (i != num / 2)printf("\n");
            }
        }
    }
    return 0;
}