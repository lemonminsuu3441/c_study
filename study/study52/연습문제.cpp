#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;

	printf("키(cm)를 입력하시오.");
	scanf("%lf", &a);

	double b = a / 2.54;
	double c = b / 12;

	printf("입력하신 키 %.2lf%센티미터는 %.2lf피트와 %.2lf인치에 해당됩니다.", a, c, b);

	return 0;

}