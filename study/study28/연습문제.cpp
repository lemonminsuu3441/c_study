#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a;


	printf("문자를 입력하세요.:");
	scanf("%c", &a);

	printf("%c의 ASCII코드 값은 %d입니다.", a, a);

	return 0;
}