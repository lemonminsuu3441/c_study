#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;

	printf("kg������ ���Ը� �Է��Ͻÿ�. : ");
	scanf("%lf", &a);
	printf("�Է��Ͻ� ���� %.1lfkg�� %.1lflb�� �ش��մϴ�.\n", a, a / 0.45359237);

	return 0;
}