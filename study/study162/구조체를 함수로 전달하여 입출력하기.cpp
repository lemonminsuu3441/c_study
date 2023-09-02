#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 5

struct person
{
	char name[10], gender[4];
	int age;
};

// 함수 원형 선언
void input_by_address(struct person *ptr);
void output_by_vaule(struct person shopper);

int main()
{
	struct person buyer;

	input_by_address(&buyer); // 주소에 의한 호출 방식

	printf("\n>> 구매자 정보 : ");
	output_by_vaule(buyer); // ;값에 의한 호출 방식

	return 0;
}

// ptr이 가리키는 곳의 구조체에 자료를 입력하는 함수
void input_by_address(struct person* ptr)
{
	printf("이름은? "); scanf("%s", ptr->name);
	printf("성별은(남 또는 여)? "); scanf("%s", ptr->gender);
	printf("나이은? "); scanf("%d", &ptr->age);
}

// 전달된 구조체의 멤버를 출력하는 함수
void output_by_vaule(struct person shopper)
{
	printf("%s(%s) %d세\n", shopper.name, shopper.gender, shopper.age);
}