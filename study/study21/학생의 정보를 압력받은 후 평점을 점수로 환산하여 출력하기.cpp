#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[10];  //�̸�(�ִ� 10���� ���ڸ� ������ �迭)
	int year;  // �г�
	double GPA, score;  //����, ����
	
	//�л��� ���� �Է�
	printf("�̸���? ");
	fgets(name, sizeof(name), stdin);
	printf("�� �г�? ");
	scanf("%d", &year);
	printf("%d�г� %s ������? ", year, name);
	scanf("%lf", &GPA);

	//������ 100�� ������ ������ ��ȯ
	score = (GPA * 100) / 4.5;

	//ó�� ��� ���
	printf("\n-------------------------------------\n");
	printf("   �̸�     �г�      ����(����)    ");
	printf("\n-------------------------------------\n");
	printf("%-19s %d %7.1lf (%5.1lf)", name, year, GPA, score);
	printf("\n-------------------------------------\n");

	return 0;
}