#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x, n = 3;

	printf("���� �Է� : ");
	scanf("%d", &x);

	printf("%d >> %d = %d\n", x, n, x >> n);
	printf("%d << %d = %d\n", x, n, x << n);

	return 0;
}