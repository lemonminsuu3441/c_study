#include <stdio.h>
#define L 2			// ����� �� �� �� 
#define M 3			// ����� �� �� �� 
#define N 4			// ����� �� �� �� 

int main()
{
	int A[L][M] = { {1, 2, 3}, {4, 5, 6} };
	int B[M][N] = { {3, 4, 5, 6}, {1, 2, 4, 3}, {4, 2, 6, 1} };
	int C[L][N];
	int i, j, k;

	/*	A, B ����� ���� �Է��ϴ� ����� �ڵ�

		printf("\n��� A �Է� \n");
		for(i=0; i<M; i++)
			for(j=0; j<N; j++)
			{
				printf("%d�� %d��? ", i+1, j+1);
				scanf("%d", &A[i][j]);
			}

		printf("\n��� B �Է� \n");
		for(i=0; i<M; i++)
			for(j=0; j<N; j++)
			{
				printf("%d�� %d��? ", i+1, j+1);
				scanf("%d", &B[i][j]);
			}
	*/
	// �� ����� ���� �迭 C�� ���ϱ�
	for (i = 0; i < L; i++)
		for (j = 0; j < N; j++)
		{
			C[i][j] = 0;
			for (k = 0; k < M; k++)
				C[i][j] += A[i][k] * B[k][j];
		}

	// ��� A ��� 
	printf("\n ��� A\n");
	for (i = 0; i < L; i++)
	{
		printf(" [ ");
		for (j = 0; j < M; j++)
			printf("%2d ", A[i][j]);
		printf("] \n");
	}

	// ��� B ���	
	printf("\n ��� B\n");
	for (i = 0; i < M; i++)
	{
		printf(" [ ");
		for (j = 0; j < N; j++)
			printf("%2d ", B[i][j]);
		printf("] \n");
	}

	// ��� C ��� 
	printf("\n ��� C=A*B \n");
	for (i = 0; i < L; i++)
	{
		printf(" [ ");
		for (j = 0; j < N; j++)
			printf("%2d ", C[i][j]);
		printf("] \n");
	}

	return 0;
}
