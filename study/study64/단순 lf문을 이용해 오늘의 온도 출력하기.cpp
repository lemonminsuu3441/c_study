#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int temp;

	printf("현재 온도는? ");
	scanf("%d", &temp);  // temp에 온도  입력하기

	if (temp < 0)
	{
		printf("오늘은 영하이며 ");
	}

		printf("현재 온도는 %d도입니다.\n", temp);

		return 0;
}