#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char f_name[20], temp[10];  // ���ϸ��� ������ �迭, �ӽ� ���ڿ� �迭
    int Ca, Na;

    for (Ca = 10; Ca < 30; Ca += 10)
    {
        for (Na = 1; Na < 4; Na++)
        {
            strcpy(f_name, "file");  // ���ϸ� "file"�� ����

            strcat(f_name, "_Ca_");  // ���ϸ� "_Ca_"�� ����
            sprintf(temp, "%d", Ca); // ���� Ca�� ���ڿ��� ��ȯ�Ͽ� temp�� ����
            strcat(f_name, temp);    // ���ϸ� Ca�� ���� ����

            strcat(f_name, "_Na_");  // ���ϸ� "_Na_"�� ����
            sprintf(temp, "%d", Na); // ���� Na�� ���ڿ��� ��ȯ�Ͽ� temp�� ����
            strcat(f_name, temp);    // ���ϸ� Na�� ���� ����

            printf("Ca=%d, Na=%d�� �� ���ϸ� : %s \n", Ca, Na, f_name);
        }
    }

    return 0;
}
