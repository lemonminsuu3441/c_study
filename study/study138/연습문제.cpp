// 표준편차 구하기
#include<stdio.h>
#include<math.h>

#define N 5

int main()
{
	int i, x[N] = { 55, 21, 32, 47, 19 };
	double ave, sum = 0;

	//평균 구하기
	for (i = 0; i < N; i++)
		sum += x[i];
	ave = sum / N;

	// 표준편차 구하기
	sum = 0;
	for (i = 0; i < N; i++)
		sum = sum + pow(x[i] - ave, 2);

	// 배열 원소 출력하기	
	for (i = 0; i < N; i++)
		printf("x[%d]=%d \n", i, x[i]);

	// 평균과 표준편차 출력하기
	printf("\n평균: %.1lf\n", ave);
	printf("\n표준편차: %.1lf\n", sqrt(sum / N));

	return 0;
}