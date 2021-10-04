#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//EX. 77 solution 1
int main() {
    int num;
    scanf("%d", &num);
    if (num % 2 != 0) {
        for (int i = 1; i <= (num - 1) / 2; i++) {     
            for (int j = 1; j <= ((num - 1) / 2) - i + 1; j++) printf("-");
            printf("*");
            for (int j = 1; j <= 2 * (i - 1) - 1; j++) printf("-");
            if (i != 1) printf("*");
            for (int j = 1; j <= ((num - 1) / 2) - i + 1; j++) printf("-");
            printf("\n");
        }

        printf("*");     
        for (int i = 1; i <= num - 2; i++)printf("-");
        printf("*");
        printf("\n");

        for (int i = 1; i <= (num - 1) / 2; i++) {      
            for (int j = 1; j <= i; j++) printf("-");
            printf("*");
            for (int j = 1; j <= num - 2 * (i + 1); j++) printf("-");
            if (i != (num - 1) / 2) printf("*");
            for (int j = 1; j <= i; j++) printf("-");
            if (i != (num - 1) / 2)printf("\n");
        }
    }
    else {
        num -= 1;
        for (int i = 1; i <= (num - 1) / 2; i++) {      
            for (int j = 1; j <= ((num - 1) / 2) - i + 1; j++) printf("-");
            printf("*");
            for (int j = 1; j <= 2 * (i - 1) - 1; j++) printf("-");
            if (i != 1) printf("*");
            for (int j = 1; j <= ((num - 1) / 2) - i + 1; j++) printf("-");
            printf("\n");
        }

        for (int i = 1; i <= 2; i++) {  
            printf("*");
            for (int i = 1; i <= num - 2; i++)printf("-");
            printf("*");
            printf("\n");
        }

        for (int i = 1; i <= (num - 1) / 2; i++) {      
            for (int j = 1; j <= i; j++) printf("-");
            printf("*");
            for (int j = 1; j <= num - 2 * (i + 1); j++) printf("-");
            if (i != (num - 1) / 2) printf("*");
            for (int j = 1; j <= i; j++) printf("-");
            if (i != (num - 1) / 2)printf("\n");
        }
    }
    return 0;
}