#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.1415926535 
#define VOLUME(r) (4/3.0*PI*(r)*(r)*(r))

int main()
{
	int r;

	printf("반지름 : ");
	scanf("%d", &r);
	printf(">> 반지름이 %d인 구의 부피 = %.2lf\n", r, VOLUME(r));
	return 0;
}