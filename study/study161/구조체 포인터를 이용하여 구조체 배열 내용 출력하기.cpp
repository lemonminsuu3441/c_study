#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 5

struct person
{
	char name[10], gender[4];
	int age;
};

int main()
{
	int i;
	struct person *ptr;  // ptr�� person�� ����ü�� ����Ű�� �����ͷ� ����

	// N���� ����ü ���Ҹ� ���� �迭 ����� �ʱ�ȭ
	struct person user[N] = { {"������", "��"}, {"�����", "��"}, {"������", "��"}, {"���ǿ�", "��"}, {"������", "��"} };

	// ptr �����Ͱ� ���ʴ�� ���� ���Ҹ� ����Ű�� �� �� ������� ���̸� �Է¹ޱ� 
	ptr = user;
	for (i = 0; i < N; i++)  //ptr�� user�迭�� ����Ű�� �ϱ�
	{
		// user[i]�� age ����� ���� �Է¹ޱ�
		printf("%s�� ���̴�? ", (*ptr).name);
		scanf("%d", &(*ptr).age);

		ptr++;  // ptr�� user �迭�� ���� ���Ҹ� ����Ű�� ��, �� user[i+1]�� ����Ŵ
	}

	// ptr �����Ͱ� ���ʴ�� ���� ���Ҹ� ����Ű�� �� �� ����ü�� ������ ����ϱ�
	printf("\n �̸� ���� ���� \n");
	printf("==============================\n");
	ptr = user;  // ���� ������ ���Ҹ� ����Ű�� prt�� �ٽ� ù ���Ҹ� ����Ű�� �ϱ�
	for (i = 0; i < N; i++)
	{
		// ���� ptr�� user[i]�� ����Ű�Ƿ� ptr�� �̿��Ͽ� �迭 ������ ����� ����� �� �ִ�.
		printf("%s\t %s\t %d\n", ptr->name, ptr->gender, ptr->age);

		ptr++;
	}
	printf("==============================\n");

	return 0;
}