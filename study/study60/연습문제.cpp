#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int a, b, c;
	printf("�� ���� ���� : ");
	scanf("%d%d%d", &a, &b, &c);
	printf(">> ���� ū �� = %d\n", (a = (a > b) ? a : b) > c ? a : c);
}