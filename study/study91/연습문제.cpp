#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	char ch;
	printf("문자 입력 : ");
	scanf("%c", &ch);
	if (ch >= '0' && ch <= '9')
		printf("숫자입니다");
	else if (ch >= 'A' && ch <= 'Z')
		printf("알파벳 대문자입니다");
	else if (ch >= 'a' && ch <= 'z')
		printf("알파벳 소문자입니다");
	else
		printf("숫자도 알파벳 문자도 아닙니다");
}