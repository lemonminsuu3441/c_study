#include <stdio.h>

int main()
{
	int int1, int2, int3 = 8;
	double r1, r2;

	int1 = int3 / 5;
	int2 = int3 / 5.0;
	r1 = (double)(int3 / 5);
	r2 = (double)int3 / 5;

	printf("%d\n", int1);
	printf("%d\n", int2);
	printf("%lf\n", r1);
	printf("%lf\n", r2);

	return 0;
}