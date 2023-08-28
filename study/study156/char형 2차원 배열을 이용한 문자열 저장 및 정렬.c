#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 5

int main()
{
	char silver[SIZE][10] = { "나태희", "나원빈", "문건영", "소지법" };
	char temp[10];  // 문자열 한개를 임시로 저장할 배열
	int pass, i;

	printf("** 은메달 리스트 : ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%s, ", silver[i]);
	}
	printf("\b\b ** \n\n");

	// 버블 정렬을 이용하여 이름을 가나다순으로 정렬하기
	for (pass=1; pass < SIZE; pass++)
	{
		for (i = 0; i < SIZE; i++)
		{
			if (strcmp(silver[i], silver[i + 1]) > 0)
			{
				strcpy(temp, silver[i]);
				strcpy(silver[i], silver[i + 1]);
				strcpy(silver[i + 1], temp);
			}
		}
	}
	printf("** 정렬한 리스트 : ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%s, ", silver[i]);
	}
	printf("\b\b **\n\n");

	return 0;
}