#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a, b;

	printf("�غ�, ����: ");
	scanf("%lf", &a);
	scanf("%lf", &b);

	double f = (a * b) / 2;

	printf("�غ�=%.2lfcm, ����=%.2lfcm�� �ﰢ���� ����=%.2lfm��", a, b, f);

	return 0;
}