#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

//EX. 22 solution 1

int main() {
    int num, i = 1, check = 1;
    scanf("%d", &num);
    if (num >= 0)
    {
        while (i <= num * num) {
            if (check == 1)printf("*");
            else if (i % (num * 2) == 0)printf("");      //Remove Space
            else if (i % num == 0)printf("");      //Remove Space
            else printf(" ");
            check = !check;
            if (i % num == 0 && i != num * num)printf("\n");
            if (num % 2 == 0 && i % num == 0)check = !check;
            i++;
        }
    }
    return 0;
}