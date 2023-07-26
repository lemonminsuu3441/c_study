#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x;
	printf("x입력 : ");
	scanf("%d", &x);

	double a = 2 * x * x * x - 3 * x * x + 1.0 / x;
	printf("   -->\tx=%d일 때\n\tf(x)=2x³-3x²+1/x = %.1lf\n", x, a);

	return 0;
}