#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int a, b, c;
	printf("세 개의 정수 : ");
	scanf("%d%d%d", &a, &b, &c);
	printf(">> 가장 큰 수 = %d\n", (a = (a > b) ? a : b) > c ? a : c);
}