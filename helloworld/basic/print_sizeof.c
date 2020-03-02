#include <stdio.h>

int main (void) {
    char value_char = 0;
    short value_short = 0;    
    int value_int = 0;    
    long value_long = 0;    

    printf("sizeod(value_char)=%d\n", sizeof(value_char));
    printf("sizeod(value_short)=%d\n", sizeof(value_short));
    printf("sizeod(value_int)=%d\n", sizeof(value_int));
    printf("sizeod(value_long)=%d\n", sizeof(value_long));

    value_char = 0x7f;
    value_int = 011;
    printf("char : %d", value_char);
    printf("int : %d", value_int);

    //대부분의 운영체제에서 정수 연산의 기본단위가 int 형이다
    //그렇기에 임베디드시스템같이 메모리의 제한이 큰 환경을 제외하고는 Int 형을 선택하는게 바람직하다

    //변수는 선언과 동시에 초기화하하는것이 좋다

    //가장 왼쪽에 있는 최상위비트 (MSB) 가 0이면 양수 1이면 음수이다
}