#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// Ex.48
	int n;
	int sum = 0;
	for (int i = 1; i >= 0;i++) {
		scanf("%d",&n);
		sum += n; 
		if (n == 0) break;
	}
	printf("%d",sum);
	return 0;
}

