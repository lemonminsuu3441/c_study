#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct book_info
{
	int year;
	char title[12];
};
typedef struct book_info BOOK;

int main()
{
	BOOK* books;  // ���� ������ ������ ���� �迭�� ����ų ������
	int size, i;  // ������ �Է¹��� ���� �Ǽ�
	
	do  // ���� �Ǽ� �Է�(1 �̻��� �� �Է¹ޱ�)
	{
		printf("������ �Է��� ���� �Ǽ� : "); scanf("%d", &size);
		if (size <= 0)
		{
			printf("�ַ� : �Ǽ��� �߸� �Է��Ͽ����ϴ�. �ٽ� �Է��Ͻʽÿ�. ");
		}
	} while (size <= 0);

	// ���� �Ǽ���ŭ ������ ������ ������ �Ҵ�ޱ�
	books = (BOOK*)malloc(sizeof(BOOK) * size);  // ����ü �迭�� ���� �Ҵ�
	if (books == NULL)
	{
		puts("���� ������ �Ҵ翡 �����Ͽ����ϴ�. \n");
		exit(1);
	}

	// size���� ���� ���� �Է�
	for (i = 0; i < size; i++)
	{
		printf("%d) ���� �̸� : ", i + 1);
		scanf("%49s", books[i].title); // ����: gets()�� scanf("%s", ...)�� ����

		printf("  ���ǳ⵵ : ");
		scanf("%d", &(books[i].year));
	}

	// size���� ���� ���� ���
	printf("\n >> ���� ���� ��� << \n");
	printf("\n ���� ������ ���ǳ⵵ ");
	printf("\n ================================\n");
	for (i = 0; i < size; i++)
	{
		printf("%3d %-12s %4d\n", i + 1, books[i].title, books[i].year);
	}
	printf("================================\n");

	free(books);  // ����ü �迭�� ���� ���� �Ҵ� ������ ����

	return 0;
}