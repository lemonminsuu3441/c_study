#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char lower, upper, char_num, num;

	printf("알파벳 소문자 한 개를 입력하시요. ");
	lower = getchar();

	upper = 'A' + (lower - 'a');

	printf("입력한 소문자 %c의 대문자는 %c\n", lower, upper);

	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF);

	printf("\n0~9 중 한 개를 입력하세요.");
	char_num = getchar();
	num = char_num - '0';

	printf("입력한 문자 '%c'는 정수 %d입니다. \n", char_num, num);

	return 0;

}