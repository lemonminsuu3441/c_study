#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x;
	printf("x�Է� : ");
	scanf("%d", &x);

	double a = 2 * x * x * x - 3 * x * x + 1.0 / x;
	printf("   -->\tx=%d�� ��\n\tf(x)=2x��-3x��+1/x = %.1lf\n", x, a);

	return 0;
}