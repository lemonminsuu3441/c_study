#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int sec;
	printf("��(sec)�Է� : ");
	scanf("%d", &sec);

	int a = sec / 3600;
	int b = sec % 3600 / 60;
	int c = sec % 60;
	printf(">> �Է��� %d�ʴ� %d�ð� %d�� %d���Դϴ�.\n", sec, a, b, c);

	return 0;
}