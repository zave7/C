#include <stdio.h>

void printf_array_reverse(const double* pDouble_array, int size) {
    // 배열의 마지막 원소부터 척번째 원소 까지의 내용을 출력
    for(int i=size-1; i>=0; i--) {
        printf("%f\n", *(pDouble_array+i));
    }
}

int main(void) {

    double double_array[] = {10.0, 20.1, 30.2, 40.3};
    int size = sizeof(double_array) / sizeof(double);

    printf_array_reverse(double_array, size);

    return 0;
}