#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 1000

struct person
{
	char name[10], gender[4];
	int age;
};

// 함수의 원형 선언
void input(struct person ptr[]);
void print(struct person *ptr[]);

int count; // 정보가 입력된 전체 사용자 수로서 전역 변수 선언, 자동으로 0으로 초기화

int main()
{
	struct person user[SIZE]; // 원소가 SIZE개인 구조체 배열 user 선언

	printf(" 최대 %d명의 사용자 정보를 입력받고 출력합니다 \n", SIZE);
	input(user);  // 사용자의 정보를 배열에 입력하기
	print(user);  // 배열에 저장된 사용자 정보를 출력하기

	return 0;
}

// 전달된 배열에 사용자 정보를 압려하는 함수
void input(struct person ptr[])
{
	int reply;

	do
	{
		// user[i]의 각 멤버에 사용자 정보를 입력하기
		printf("%2d. 이름은? ", count + 1); scanf("%s", ptr[count].name);
		printf("  성별은(남 또는 여)? "); scanf("%s", ptr[count].gender);
		printf("  나이은? "); scanf("%d", &ptr[count].age);
		count++;  // 배열에 입력한 사용자 수를 1 증가하기

		// 지금까지 입력한 사용자 수가 배열 원소수와 같다면 입력을 그만두기
		if (count == SIZE)
		{
			printf("더 이상 사용자가 정보를 입력할 공간이 없습니다. ");
			break;
		}

		// 사용자 정보의 입력 여부를 묻기
		printf("   계속 입력하려면 1, 그만하려면 0을 입력하세요. ");
		scanf("%d", &reply);
	} while (reply != 0);  // 그만하기를 원하지 않는다면 다시 반복하기
}

// 배열을 포인터 변수로 전달받아 배열 내용을 출력하는 함수
void print(struct person *ptr)
{
	int i;

	printf("\n 이름  성별  나이 \n");
	printf("===============================\n");
	for (i = 0; i < count; i++)
	{
		printf("%s\t %s\t %d\n", (ptr + i)->name, (ptr + i)->gender, (ptr + i)->age);
	}
	printf("===============================\n");

	return 0;
}