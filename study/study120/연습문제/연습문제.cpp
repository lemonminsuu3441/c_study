#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SWAP(x, y, t) ((t) = (x)), ((x) = (y)), ((y) = (t))

int main()
{
	int temp;
	int a, b;

	printf("두 수 입력 : ");
	scanf("%d %d", &a, &b);

	SWAP(a, b, temp);
	printf(">> %d %d\n", a, b);

	return 0;
}