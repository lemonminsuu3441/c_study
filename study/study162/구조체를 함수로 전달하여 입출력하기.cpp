#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 5

struct person
{
	char name[10], gender[4];
	int age;
};

// �Լ� ���� ����
void input_by_address(struct person *ptr);
void output_by_vaule(struct person shopper);

int main()
{
	struct person buyer;

	input_by_address(&buyer); // �ּҿ� ���� ȣ�� ���

	printf("\n>> ������ ���� : ");
	output_by_vaule(buyer); // ;���� ���� ȣ�� ���

	return 0;
}

// ptr�� ����Ű�� ���� ����ü�� �ڷḦ �Է��ϴ� �Լ�
void input_by_address(struct person* ptr)
{
	printf("�̸���? "); scanf("%s", ptr->name);
	printf("������(�� �Ǵ� ��)? "); scanf("%s", ptr->gender);
	printf("������? "); scanf("%d", &ptr->age);
}

// ���޵� ����ü�� ����� ����ϴ� �Լ�
void output_by_vaule(struct person shopper)
{
	printf("%s(%s) %d��\n", shopper.name, shopper.gender, shopper.age);
}