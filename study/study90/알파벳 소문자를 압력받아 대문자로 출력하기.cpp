#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ESC 0x1b

int main()
{
    char ch, upper;

    printf("���ĺ� �ҹ��ڸ� �Է��Ͻÿ�. (ESC Ű�� ������ ����) : ");

    while ((ch = getchar()) != ESC)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            upper = 'A' + ch - 'a';
            printf("\n��ȯ�� �빮�ڴ� %c�Դϴ�.\n", upper);
        }
        else
        {
            printf("\n���ĺ� �ҹ��ڸ� �Է��Ͻÿ�. (ESC Ű�� ������ ����) : ");
        }
    }

    printf("\n���α׷��� �����մϴ�.\n");

    return 0;
}