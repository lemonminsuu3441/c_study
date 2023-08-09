#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double radius, area, pi = 3.14;
	
	printf("반지름을 입력하시오. ");
	scanf("%lf", &radius);

	area = pi * radius * radius;

	printf("반지름 %.2lf 원의 면적은 %.2lf입니다.\n", radius, area);

	return 0;
}