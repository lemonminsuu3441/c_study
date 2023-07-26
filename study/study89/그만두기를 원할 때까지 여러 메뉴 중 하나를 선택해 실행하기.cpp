#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // exit �Լ��� ���� ��� ����
#define PI 3.14159265358979323846

int main()
{
    int answer, r; // ����ڰ� ������ �޴� ��ȣ, ������ ���� ����
    double circum, area, volume;

    do
    {
        printf("===============================\n");
        printf("==  1.���� �ѷ� ���ϱ�       ==\n");
        printf("==  2.���� ���� ���ϱ�       ==\n");
        printf("==  3.���� ���� ���ϱ�       ==\n");
        printf("==  4.�׸��α�               ==\n");
        printf("===============================\n");
        printf("�� ���ϴ� ������? ");
        scanf("%d", &answer);

        if (answer == 1 || answer == 2 || answer == 3)
        {
            printf("\n>> ��������? ");
            scanf("%d", &r);
        }

        switch (answer)
        {
        case 1:
            circum = 2 * PI * r;
            printf("���� �ѷ��� %6.2lf \n", circum);
            break;
        case 2:
            area = r * PI * r;
            printf("���� ���̴� %6.2lf \n", area);
            break;
        case 3:
            volume = 4.0 / 3.0 * PI * r * r * r;
            printf("���� ���Ǵ� %6.2lf \n", volume);
            break;
        case 4:
            printf("���α׷��� �����ϴ�. \n");
            exit(0);
        }

        printf("\n >> ����� Ȯ�������� �ƹ�Ű�� ��������. ");
        getchar(); // ���� ����(\n)�� �о���̱� ���� �߰�
        getchar(); // ����� �Է� ���
        system("clear || cls"); // ȭ���� ����� ����� �÷����� ���� �ٸ��� ����

    } while (answer != 4); // 4.�׸��α⸦ �������� �ʾ����� �ٽ� �ݺ��ϱ�

    return 0;
}
