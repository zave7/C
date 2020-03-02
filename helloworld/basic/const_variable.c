#include <stdio.h>

int main(void) {
    const int MAX_SIZE;
    //상수 선언할 때에 초기값을 할당해주지 않아도 컴파일 에러는 발생하지 않음
    printf("MAX_SIZE: %d\n", MAX_SIZE);
    
    // MAX_SIZE = 20;
    return 0;
}