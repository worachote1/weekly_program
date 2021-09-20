#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ex. 27 solution 2

int iTop;
int getn_top(int n) {
    return iTop = n;
}

void top(int n)
{
    //white space for top
    for (int k = iTop; k < n; k++) {
        printf(" ");
    }
    for (int j = 1; j <= (2 * iTop) - 1; j++) {
        printf("*");
    }

    iTop -= 1;
    if (iTop >= 1) {
        printf("\n");
        top(n);
    }
}

int iBottom = 2;
void bottom(int n)
{
    //white space for bottom
    for (int k = iBottom; k < n; k++) {

        printf(" ");
    }
    for (int j = 1; j <= (2 * iBottom) - 1; j++) {
        printf("*");
    }
    printf("\n");
    if (iBottom <= n - 1) {
        iBottom += 1;
        bottom(n);
    }
}

int main(void) {

    int n;
    scanf("%d", &n);

    getn_top(n);
    top(n);
    printf("\n");
    bottom(n);

    return 0;
}