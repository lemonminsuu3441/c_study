// ǥ������ ���ϱ�
#include<stdio.h>
#include<math.h>

#define N 5

int main()
{
	int i, x[N] = { 55, 21, 32, 47, 19 };
	double ave, sum = 0;

	//��� ���ϱ�
	for (i = 0; i < N; i++)
		sum += x[i];
	ave = sum / N;

	// ǥ������ ���ϱ�
	sum = 0;
	for (i = 0; i < N; i++)
		sum = sum + pow(x[i] - ave, 2);

	// �迭 ���� ����ϱ�	
	for (i = 0; i < N; i++)
		printf("x[%d]=%d \n", i, x[i]);

	// ��հ� ǥ������ ����ϱ�
	printf("\n���: %.1lf\n", ave);
	printf("\nǥ������: %.1lf\n", sqrt(sum / N));

	return 0;
}