#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i; // 등분수
	double dx, a, b, x, y, integral = 0.0;

	printf("적분 구간 시작은? ");
	scanf("%lf", &a);
	printf("적분 구간 끝은? ");
	scanf("%lf", &b);
	printf("n(적분 구간의 개수)는? ");
	scanf("%d", &n);

	dx = (b - a) / n;  // 사각형의 밑변의 길이
	for (x = a, i = 1; i <= n; i++) // n개의 사각형 면적의 합 구하기
	{
		y = x * x;		// 해당 x 좌표에서의 함수 값(사각형 높이)
		integral += y * dx;	// 현재 사각형 면적(밑변*높이)을 근사치에 누적
		x = x + dx;		// x 좌표를 dx만큼 증가
	}
	printf("\nf(x) = x²의 [%.1lf, %.1lf] 구간의 적분 근사치는 %.3lf입니다.\n", a, b, integral);

	return 0;
}