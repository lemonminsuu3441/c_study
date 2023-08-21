#include <stdio.h>
#define STUDENT 10		// 학생수
#define N 10			// 문항수
#define YES 1
#define NO 0

int main()
{
	// 학생 STUDENT명의 시험 답안지를 2차원 배열에 초기화하기
	int paper[STUDENT][N] = { {1, 3, 2, 3, 4, 2, 3, 1, 4, 3},
							{1, 2, 2, 2, 4, 2, 3, 1, 4, 2},
							{4, 3, 2, 3, 4, 2, 3, 1, 4, 2},
							{1, 3, 2, 2, 4, 3, 3, 4, 4, 2},
							{1, 3, 2, 3, 4, 2, 3, 3, 4, 1},
							{1, 1, 2, 4, 4, 3, 3, 2, 4, 3},
							{1, 3, 2, 3, 4, 2, 3, 1, 4, 2},
							{1, 3, 2, 3, 3, 2, 3, 1, 4, 2},
							{2, 3, 3, 3, 3, 2, 4, 1, 4, 2},
							{3, 4, 4, 2, 4, 1, 2, 1, 4, 2} };
	int answer[N] = { 1, 3, 2, 3, 4, 2, 3, 1, 4, 2 };			// 시험 정답 저장 배열
	int total[STUDENT] = { 0 }, id[STUDENT], rank[STUDENT];	// 각 학생의 총점, 번호, 석차
	int i, j, u, std, pass, temp, swap;

	// 학생의 번호를 id 배열에 저장하기
	for (i = 0; i < STUDENT; i++)
	{
		id[i] = i + 1;
	}

	// 학생마다 자신의 답안과 정답지의 답안을 비교하여 채점한 결과를 화면에 표시하기
	printf("\n\t ■ 문항별 채점 결과 ■ \n");
	printf("=====================================================\n");
	printf(" 문항");
	for (i = 0; i < N; i++)
		printf("%4d", i);
	printf("   점수");
	printf("\n=====================================================\n");

	//학생의 답안지(paper[std])와 정답지(anser 배열)를 비교하여 채점한 결과 출력하기
	for (std = 0; std < STUDENT; std++)
	{
		printf("%3d번 ", std + 1);

		for (i = 0; i < N; i++)
			if (paper[std][i] == answer[i])
			{
				total[std]++;
				printf("  ○");	// 'ㄷ'+<한자>키
			}
			else
				printf("  ×");

		printf(" %3d점 \n", total[std]);
	}
	printf("=====================================================\n");

	// 점수 정렬하기: 버블 소팅	
	for (pass = 1; pass < STUDENT; pass++)
	{
		swap = NO;
		for (i = 0; i < STUDENT - pass; i++)
			if (total[i] < total[i + 1])
			{
				// 점수를 교환하기
				temp = total[i];
				total[i] = total[i + 1];
				total[i + 1] = temp;

				// 번호를 교환하기
				temp = id[i];
				id[i] = id[i + 1];
				id[i + 1] = temp;

				swap = YES;
			}

		// 한번도 교환된 적이 없다면 정렬이 완료된 것이므로 끝내기
		if (swap == NO) break;
	}

	// 석차 구하기: 나보다 점수가 높은 학생수 + 1로 석차를 구하는 방법
	for (i = 0; i < STUDENT; i++)
	{
		rank[i] = 1;	// 미리 1로 초기화한다면 1을 더할 필요가 없음
		for (u = 0; u < STUDENT; u++)
			if (total[i] < total[u])	// 나의 점수가 상대방의 점수보다 낮다면
				rank[i]++;				// 나의 석차를 1 증가			
	}

	/* 석차 구하기: 점수를 정렬한 결과를 활용하여 석차 구하기, int j, next; 선언이 필요
	for (i=0; i<STUDENT; )
	{
		next=i+1;
		while (total[i]==total[next])	// 동점자의 석차 처리
			next++;

		for (j=i; j<next; j++)
			rank[j]=i+1;
		i=next;
	}
	*/

	// 결과 출력
	printf("\n\t ■ 정렬 및 석차 ■ \n");
	printf("\t ===================\n");
	printf("\t  번호  점수  석차 \n");
	printf("\t ===================\n");
	for (i = 0; i < STUDENT; i++)
		printf("\t  %2d번  %2d점 %2d등 \n", id[i], total[i], rank[i]);
	printf("\t ===================\n\n");

	return 0;
}