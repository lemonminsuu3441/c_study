#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int sec;
	printf("초(sec)입력 : ");
	scanf("%d", &sec);

	int a = sec / 3600;
	int b = sec % 3600 / 60;
	int c = sec % 60;
	printf(">> 입력한 %d초는 %d시간 %d분 %d초입니다.\n", sec, a, b, c);

	return 0;
}