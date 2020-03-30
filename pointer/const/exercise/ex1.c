#include <stdio.h>

void printf_array_reverse(const double* pDouble_array, int size) {
    // �迭�� ������ ���Һ��� ô��° ���� ������ ������ ���
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