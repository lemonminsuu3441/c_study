#define _CRT_SECURE_NO_WARNINGS
#include <STDIO.H>

int main()
{
	int a;
	double h, j, k;
	double pi = 3.141592;

	printf("반지름(cm)을입력하세요.");
	scanf("%d", &a);

	h = 2 * pi * a;
	j = pi * a * a;
	k = pi * a * a * a * 4 / 3;

	printf("둘레= %7.2lfcm\n", h);
	printf("면적= %7.2lfcm\n", j);
	printf("부피= %7.2lfcm\n", k);

	return 0;
}