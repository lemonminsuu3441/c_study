#include <stdio.h>
#include <string.h>

void print(char* string);

int main()
{
	char* s = "C-Language";
	int i;

	// s ���ڿ��� (i+1)��° ���ں��� ������ ����ϱ⸦ �ݺ��ϱ�
	for (i = strlen(s); i >= 0; i--) 
	{
		print(s+i);
	}

	return 0;
}

// string�� ����Ű�� ������ ���ڿ� ����ϴ� �Լ�
void print(char* string)
{
	printf("%s\n", string);
}
