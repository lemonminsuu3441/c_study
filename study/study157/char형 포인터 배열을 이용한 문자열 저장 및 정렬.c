#include <stdio.h>
#include <string.h>

int main()
{
    char* gold[] = { "한빛", "성춘향", "이몽룡", "사공민국", "황해" };
    char* temp;  // 문자열 주소를 임시로 저장할 포인터
    int size, i, j;  // 배열에 저장된 문자열의 수

    // char형 포인터 배열 gold의 원소수를 size에 구하기
    size = sizeof(gold) / sizeof(gold[0]);

    printf("** 금매달 리스트 : ");
    for (i = 0; i < size; i++)  // 정렬 전 배열 내용 출력하기
    {
        printf("%s", gold[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf(" ** \n\n");

    // 교환 정렬을 이용하여 이름을 가나다순으로 정렬하기
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (strcmp(gold[i], gold[j]) > 0)
            {
                // 문자열 주소를 교환
                temp = gold[i];
                gold[i] = gold[j];
                gold[j] = temp;
            }
        }
    }
    printf("** 정렬한 리스트 : ");
    for (i = 0; i < size; i++)
    {
        printf("%s", gold[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf(" **\n\n");

    return 0;
}
