#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX(a,b,c) (((a=(a>b)?a:b) > c)? a : c)

int main()
{
	int a, b, c;

	printf("�� ���� �� : "); scanf("%d%d%d", &a, &b, &c);
	printf(">> ���� ū �� : %d\n", MAX(a, b, c));
	return 0;
}