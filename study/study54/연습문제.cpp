#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int r, h;
	double pi = 3.141592;
	printf("원기둥의 밑면의 반지름, 높이를 입력하세요(cm단위) : ");
	scanf("%d, %d", &r, &h);

	double x = pi * r * r * h;
	
	printf(">> 계산한 원기둥의 부피는 %.1lfcm³입니다.\n",x);

	return 0;
}