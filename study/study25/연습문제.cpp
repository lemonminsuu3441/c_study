#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int r;
	double length;

	printf("�ѷ��� ���� ���� ��������? ");
	scanf("%d", &r);

	length = 2 * 3.14 * r;

	printf("�������� %d�� ���� �ѷ��� %.2lf\n", r, length);

	return 0;
}