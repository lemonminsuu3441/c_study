#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // exit 함수를 위한 헤더 파일
#define PI 3.14159265358979323846

int main()
{
    int answer, r; // 사용자가 선택한 메뉴 번호, 반지름 저장 변수
    double circum, area, volume;

    do
    {
        printf("===============================\n");
        printf("==  1.원의 둘레 구하기       ==\n");
        printf("==  2.원의 넓이 구하기       ==\n");
        printf("==  3.구의 부피 구하기       ==\n");
        printf("==  4.그만두기               ==\n");
        printf("===============================\n");
        printf("◈ 원하는 내용은? ");
        scanf("%d", &answer);

        if (answer == 1 || answer == 2 || answer == 3)
        {
            printf("\n>> 반지름은? ");
            scanf("%d", &r);
        }

        switch (answer)
        {
        case 1:
            circum = 2 * PI * r;
            printf("원의 둘레는 %6.2lf \n", circum);
            break;
        case 2:
            area = r * PI * r;
            printf("원의 넓이는 %6.2lf \n", area);
            break;
        case 3:
            volume = 4.0 / 3.0 * PI * r * r * r;
            printf("구의 부피는 %6.2lf \n", volume);
            break;
        case 4:
            printf("프로그램을 끝냅니다. \n");
            exit(0);
        }

        printf("\n >> 결과를 확인했으면 아무키나 누르세요. ");
        getchar(); // 개행 문자(\n)을 읽어들이기 위해 추가
        getchar(); // 사용자 입력 대기
        system("clear || cls"); // 화면을 지우는 방법을 플랫폼에 따라 다르게 설정

    } while (answer != 4); // 4.그만두기를 선택하지 않았으면 다시 반복하기

    return 0;
}
