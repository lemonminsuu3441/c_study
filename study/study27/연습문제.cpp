#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a, b;

	printf("화씨온도(F)를 입력하세요. : ");
	scanf("%lf", &a);

	b = (5.0 / 9.0) * (a - 32); //(5/9)의 결과는 0임을 주의해야 한다.

	printf("화씨온도 %.1lf의 섭씨온도는 %.1lf입니다.", a, b);

	return 0;
}