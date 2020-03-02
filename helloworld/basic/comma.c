#include <stdio.h>

int main(void) {
    int a = 0, n = 1;;
    a = 1, a *= a, a -= n, printf("%d", a);
    
    // float test = 0;

    // scanf("%f", &test);

    // printf("%.3f", test);

    if("dsa") {
        printf("true");
    }

    char test = 0x02;
    printf("%x", (int)test<<1);

    //곱하기 연산보다 비트연산이 속도면에서 더 우수하다
    return 0;
}