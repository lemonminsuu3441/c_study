#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b;
	int i;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &a, &b);

	printf("%d�� ��������� %d�� ����� �ƴ� �� \n", a, b);

	for (i = 1; i <= 100; i++)
	{

		if ((i % a) == 0 && (i % b) != 0)
			printf("%d ", i);
	}
	printf("\n");
}