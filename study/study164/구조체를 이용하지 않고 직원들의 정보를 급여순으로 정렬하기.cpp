#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 5

int main()
{
	char name[SIZE][10];
	char id[SIZE][10];
	int salary[SIZE];
	int average = 0, sum = 0, i, temp_int, pass;
	char temp_string[10]; // 문자열을 임시로 저장할 곳

	// 직원 5명의 정보 입력 및 급여 누적
	printf(">> 직원의 정보(이름, ID, 급여)를 입력하시오. << \n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d번: ", i + 1);
		scanf("%s %s %d", name[i], id[i], &salary[i]);
		sum += salary[i];
	}
	average = sum / SIZE;

	// 급여가 평균 이상인 직원의 id와 급여를 출력하기
	printf("\n---------------------------------------------\n");
	printf(" 급여가 %d만원(평균) 이상인 직원 정보 ", average);
	printf("\n---------------------------------------------\n");
	for (i = 0; i < SIZE; i++)
	{
		if (salary[i] >= average)
		{
			printf("\t%s\t %d만원 \n", id[i], salary[i]);
		}
	}
	printf("-----------------------------------------------\n");

	// 급여의 오름차순으로 직원의 정보를 정렬하기(버블 정렬)
	for (pass = 1; pass < SIZE; pass++)
	{
		for (i = 0; i < SIZE - pass; i++)
		{
			// 앞 직원의 급여가 더 크다면 서로 교환하기
			if (salary[i] > salary[i + 1])
			{
				// 이름 교환
				strcpy(temp_string, name[i]);
				strcpy(name[i], name[i + 1]);
				strcpy(name[i + 1], temp_string);
				// 아이디 교환
				strcpy(temp_string, id[i]);
				strcpy(id[i], id[i + 1]);
				strcpy(id[i + 1], temp_string);
				// 급여 교환
				temp_int = salary[i];
				salary[i] = salary[i + 1];
				salary[i + 1] = temp_int;
			}
		}
	}

	// 정렬 결과 출력하기
	printf("\n-------------------------------------------\n");
	printf("\t급여순 정렬 결과 ");
	printf("\n-------------------------------------------\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("\t%s\t %d만원 \n", id[i], salary[i]);
	}
	printf("\n-------------------------------------------\n");

	return 0;
}