#include <stdio.h>
#define N 4

void print_arr(int* arr);
void percentage(int* arr);

int main()
{
	int count[N] = { 42, 37, 83, 33 };

	printf("인원수 : ");
	print_arr(count);  // count 베열을 전달해 출력하기

	percentage(count);  // count 배열울 전달해 백분율로 변환하기

	printf("\n백분율: ");
	print_arr(count);  // count 배열를 전달해 출력하기

	return 0;
}

void print_arr(int* arr)
{
	int i;

	for (i = 0; i < N; i++)
	{
		printf("%3d", *(arr + i));
	}
}

void percentage(int* arr)
{
	int i, total = 0;

	for (i = 0; i < N; i++)
	{
		total += *(arr + i);
	}

	for (i = 0; i < N; i++)
	{
		*(arr + i) = (int)((double)*(arr + i) / total * 100);
	}
}
