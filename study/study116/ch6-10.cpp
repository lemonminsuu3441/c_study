#define _CRT_SECURE_NO_WARNINGS
#include "ch6-9.h"
#include <stdio.h>

int main()
{
	int n;

	printf("�Է� : ");
	scanf("%d", &n);

	printf("%d�� ���� = %d, %d�� ������ = %d\n", n, SQUARE(n), n, CUBE(n));

	return 0;
}