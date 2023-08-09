#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a, b;

	printf("밑변, 높이: ");
	scanf("%lf", &a);
	scanf("%lf", &b);

	double f = (a * b) / 2;

	printf("밑변=%.2lfcm, 높이=%.2lfcm인 삼각형의 면적=%.2lfm²", a, b, f);

	return 0;
}