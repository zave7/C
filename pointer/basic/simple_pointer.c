#include <stdio.h>

int main(void) {

    int int_value = 9; // 정수형 변수 선언

    int*pInt_value = NULL; // 포인터 변수 선언

    pInt_value = &int_value; // int_value의 주소 저장

    //printf("int_value: %d\n", int_value );
    //printf("pInt_value: %x\n", pInt_value );
    ///printf("*pInt_value: %d\n", *pInt_value );
    //printf("%x", NULL);
    
    if(NULL == 0) {
        printf("NULL은 0이다");
    }

    return 0;
}