#include <stdio.h>
#include <string.h>
#define N 10

// 구조체 정의
struct person
{
	char name[10];
	char gender[4];
	int age;
};

int main()
{
	// N개의 구조체형 원소를 갖는 배열의 선언과 초기화
	struct person user[N] = { { "나태의", "여", 20 }, { "유현빈", "남", 29 },
		{"나원빈", "남", 25}, {"문건영", "여", 20}, {"소지법", "남", 25},
		{"나보배", "여", 29}, {"장도건", "남", 32}, {"고수영", "여", 29},
		{"이나라", "여", 31}, {"김해수", "여", 35} };

	int male = 0, female = 0, sum = 0, i; // 남자수, 여자수

	// 남녀 수와 전체 나이의 합 구하기
	for ( i = 0; i < N; i++)
	{
		// user[i]의 gender 멤버에 저장된 성별에 따라 남자수 또는 여자수를 1 증가하기
		if (strcmp(user[i].gender, "남") == 0)
		{
			male++;
		}
		else
			female++;
		sum += user[i].age;  // 사용자의 나이를 sum에 누적
	}

	// 결과 출력하기
	printf("이름  성별 나이 \n");
	printf("============================\n");
	for (i = 0; i < N; i++)
	{
		printf("%s\t %s\t %d\n", user[i].name, user[i].gender, user[i].age);
	}
	printf("============================\n\n");
	printf(">> 남자: %d명\n", male);
	printf(">> 여자: %d명\n", female);
	printf(">> 평균 연령: %d살\n", sum / N);

	return 0;
}

