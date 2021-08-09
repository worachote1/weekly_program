#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// 48.จงเขียนโปรแกรมเพื่อรับตัวเลขไปเรื่อยๆ จนกว่าจะรับเลข 0 หลังจากนั้นให้แสดงผลรวมของตัวเลขที่รับมาทั้งหมด
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

