#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch;
	float i;

	printf("입력단위가 cm이면 'c'나 'C'를, inch이면 'i'나 'I'를 입력하세요.\n");
	printf("입력 단위 :"); scanf("%c", &ch);
	printf("입력 값 :"); scanf("%f", &i);

	if (ch == 'c' || ch == 'C')
	{
		printf("\n입력한 %.2f cm는 %.2f inch입니다.\n", i, i / 2.54);
	}
	else if (ch == 'i' || ch == 'I')
	{
		printf("\n입력한 %.2f inch는 %.2f cm입니다.\n", i, i * 2.54);
	}
	else
	{
		printf("\n입력 단위에 i(I) 또는 c(C)를 입력하세요,\n");
	}
}