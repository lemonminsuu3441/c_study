#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ESC 0x1b

int main()
{
    char ch, upper;

    printf("알파벳 소문자를 입력하시오. (ESC 키를 누르면 종료) : ");

    while ((ch = getchar()) != ESC)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            upper = 'A' + ch - 'a';
            printf("\n변환된 대문자는 %c입니다.\n", upper);
        }
        else
        {
            printf("\n알파벳 소문자를 입력하시오. (ESC 키를 누르면 종료) : ");
        }
    }

    printf("\n프로그램을 종료합니다.\n");

    return 0;
}