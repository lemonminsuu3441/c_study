#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a, b;

	printf("ȭ���µ�(F)�� �Է��ϼ���. : ");
	scanf("%lf", &a);

	b = (5.0 / 9.0) * (a - 32); //(5/9)�� ����� 0���� �����ؾ� �Ѵ�.

	printf("ȭ���µ� %.1lf�� �����µ��� %.1lf�Դϴ�.", a, b);

	return 0;
}