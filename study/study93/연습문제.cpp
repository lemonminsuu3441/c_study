#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int mon;

	printf("월 입력 : ");
	scanf("%d", &mon);

	switch (mon)
	{
		case 1:
		case 2:
		case 3: printf(">> 1분기 입니다.\n"); break;
		case 4:
		case 5:
		case 6: printf(">> 2분기 입니다.\n"); break;
		case 7:
		case 8:
		case 9: printf(">> 3분기 입니다.\n"); break;
		case 10:
		case 11:
		case 12: printf(">> 4분기 입나다.\n"); break;
		default:printf("잘못된 월을 입력했습니다.\n");
	}
}