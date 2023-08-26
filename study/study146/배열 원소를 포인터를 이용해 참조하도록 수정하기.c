#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define SIZE 5

int main()
{
	int quiz[SIZE];
	int i, count, sum;
	double ave;

	printf("%d명의 점수를 순서대로 입력하시오. \n\n", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		printf("%d번의 퀴즈 점수는? ", i + 1);
		scanf("%d", (quiz + i));
	}

	sum = 0;
	for (i = 0; i < SIZE; i++)
	{
		sum = sum + *(quiz + i);
	}

	ave = (double)sum / SIZE;

	count = 0;
	for (i = 0; i < SIZE; i++)
	{
		if (*(quiz + i) < ave)
		{
			count++;
		}
	}

	printf("\n결과를 보려면 아무키나 누르세요. \n");
	_getch();  // 키보드로부터 문자 한 개를 입력받는다. 일시 정지하는 효과를 가진다.

	printf("\n=========================\n");
	printf("평균: %.1lf점 \n", ave);
	printf("평균 미만: %d명 \n", count);
	printf("\n=========================\n");

	return 0;
}