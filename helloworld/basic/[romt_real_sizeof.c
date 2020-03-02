#include <stdio.h>

int main(void) {
    float value_float = 0;
    double value_double = 0;

    printf("%d", sizeof(value_float));
    printf("sdfds\n");
    printf("%d", sizeof(value_double));
    //c 컴파일러는 기본적으로 실수를 double형으로 인식한다
    //때문에 float형 변수에 실수를 대입할 때는 접미사 f를 붙인다
}