#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define RANGE(r, min, max) (((r) >= (min) && (r) <= (max))? 1 : 0)

int main()
{
	int r, max, min;

	printf("최소값 : "); scanf("%d", &min);
	printf("최대값 : "); scanf("%d", &max);
	do {
		do {
			r = rand();
		} while (!RANGE(r, min, max));
		printf("%d ", r);
	} while (getchar() != 0x1b);

	return 0;
}