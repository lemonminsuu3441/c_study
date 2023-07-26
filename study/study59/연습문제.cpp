#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num, thou, hun, ten, one;
	printf("네자리 정수를 입력하시오 : ");
	scanf("%d", &num);

	thou = num / 1000;
	hun = num % 1000 / 100;
	ten = num % 100 / 10;
	one = num % 10;


	printf("입력한 수는 %d천%d백%d십%d입니다\n", thou, hun, ten, one);

	return 0;
}