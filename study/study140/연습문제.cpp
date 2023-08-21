#include <stdio.h>
#define L 2			// 행렬의 총 행 수 
#define M 3			// 행렬의 총 열 수 
#define N 4			// 행렬의 총 열 수 

int main()
{
	int A[L][M] = { {1, 2, 3}, {4, 5, 6} };
	int B[M][N] = { {3, 4, 5, 6}, {1, 2, 4, 3}, {4, 2, 6, 1} };
	int C[L][N];
	int i, j, k;

	/*	A, B 행렬을 직접 입력하는 경우의 코드

		printf("\n행렬 A 입력 \n");
		for(i=0; i<M; i++)
			for(j=0; j<N; j++)
			{
				printf("%d행 %d열? ", i+1, j+1);
				scanf("%d", &A[i][j]);
			}

		printf("\n행렬 B 입력 \n");
		for(i=0; i<M; i++)
			for(j=0; j<N; j++)
			{
				printf("%d행 %d열? ", i+1, j+1);
				scanf("%d", &B[i][j]);
			}
	*/
	// 두 행렬의 곱을 배열 C에 구하기
	for (i = 0; i < L; i++)
		for (j = 0; j < N; j++)
		{
			C[i][j] = 0;
			for (k = 0; k < M; k++)
				C[i][j] += A[i][k] * B[k][j];
		}

	// 행렬 A 출력 
	printf("\n 행렬 A\n");
	for (i = 0; i < L; i++)
	{
		printf(" [ ");
		for (j = 0; j < M; j++)
			printf("%2d ", A[i][j]);
		printf("] \n");
	}

	// 행렬 B 출력	
	printf("\n 행렬 B\n");
	for (i = 0; i < M; i++)
	{
		printf(" [ ");
		for (j = 0; j < N; j++)
			printf("%2d ", B[i][j]);
		printf("] \n");
	}

	// 행렬 C 출력 
	printf("\n 행렬 C=A*B \n");
	for (i = 0; i < L; i++)
	{
		printf(" [ ");
		for (j = 0; j < N; j++)
			printf("%2d ", C[i][j]);
		printf("] \n");
	}

	return 0;
}
