#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i, n, sum = 0;
	printf("������ ���� ���� n�� �Է� : "); scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += i * i;

	}
	printf("1���� %d������ ������ ���� %d�Դϴ�.\n", n, sum);
}