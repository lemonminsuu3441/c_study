#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch;

	printf("���� �Է� : ");
	scanf("%c", &ch);  //ch = getchar();

	printf("%2d", ch & (1 << 7) ? 1 : 0);
	printf("%2d", ch & (1 << 6) ? 1 : 0);
	printf("%2d", ch & (1 << 5) ? 1 : 0);
	printf("%2d", ch & (1 << 4) ? 1 : 0);
	printf("%2d", ch & (1 << 3) ? 1 : 0);
	printf("%2d", ch & (1 << 2) ? 1 : 0);
	printf("%2d", ch & (1 << 1) ? 1 : 0);
	printf("%2d\n", ch & (1) ? 1 : 0);

	return 0;
}