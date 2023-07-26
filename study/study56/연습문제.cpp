#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int giga;
	printf("ют╥б(Gigabyte) : ");
	scanf("%d", &giga);

	int a = giga * 1024;
	int b = giga * 1024 * 1024;

	printf(">> %dGigabyte = %dMegabyte = %dKillobyte\n", giga, a, b);

	return 0;
}