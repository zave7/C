#include <stdio.h>

int main(void) {
    int input = 0;

    printf(" 숫자입력 : ");
    scanf("%d", &input);

    if(input & 0x02) {
        printf("두번째 비트가 1입니다,");
    } else {
        printf("두번째 비트가 1이 아닙니다.");
    }

    //정수연산이 실수연산보다 빠르고
    //곱셉이 나눗셈 연산보다 빠르고
    //unsigned 형이 signed형 보다 빠르다
}