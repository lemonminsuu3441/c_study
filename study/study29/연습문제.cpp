#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int octal, hexa_decimal;
	int sum;

	printf("8���� 16������ ������� �Է��ϼ���. : ");
	scanf("%o %x", &octal, &hexa_decimal);

	sum = octal + hexa_decimal;

	printf("%o(8) + %x(16) = %d\n", octal, hexa_decimal, sum);

	return 0;
}