#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// 48.����¹����������Ѻ����Ţ�������� �����Ҩ��Ѻ�Ţ 0 ��ѧ�ҡ�������ʴ�������ͧ����Ţ����Ѻ�ҷ�����
	int n;
	int sum = 0;
	int i = 1;
	while (i != 0)
	{
		scanf("%d", &n);
		if (n == 0)  
			break; 
		sum += n;
	}
	printf("%d", sum);
	return 0;
}
