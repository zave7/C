#include <stdio.h>

int main(void) {

    float value_f = 0;
    for(int i=0; i<20; i++) {
        value_f = value_f+0.3f;
        
    }
    printf("%f", value_f);

    double value_d = 0;
    for(int i=0; i<20; i++) {
        value_d += 0.3;
    }
    printf("%f", value_d);
    return 0;

    //자동형변환 : 형변환은 자료의 손실을 최소화하는 방향으로 일어난다 자료형의 크기, 실수 자료형
}