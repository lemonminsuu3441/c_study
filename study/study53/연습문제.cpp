#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;

	printf("kg단위의 무게를 입력하시오. : ");
	scanf("%lf", &a);
	printf("입력하신 무게 %.1lfkg은 %.1lflb에 해당합니다.\n", a, a / 0.45359237);

	return 0;
}