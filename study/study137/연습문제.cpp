#include <stdio.h>
#define N 10

int main()
{
	int freeze[N] = { 15, 0, -20, -30, 50, -5, -120, -5, 10, -12 };
	int i, max;
	int index;			// 최대에 해당하는 원소의 첨자를 저장할 변수

	max = freeze[0];	// 최대치의 초기값을 첫 원소의 값으로 가정
	index = 0;			// 첫 초기값의 첨자 정보를 보관
	for (i = 1; i < N; i++)
	{
		if (max < freeze[i])
		{
			max = freeze[i];
			index = i;	// max의 값이 freeze[i]로 변경되었으므로
			// index도 바뀐 값의 배열 원소 첨자 값 i로 변경함
		}
	}

	printf(" 어는 점 목록 : ");
	for (i = 0; i < N; i++)
		printf("%d  ", freeze[i]);
	printf("\n 가장 높은 어는 점 : freeze[%d] = %d \n", index, max);

	return 0;
}