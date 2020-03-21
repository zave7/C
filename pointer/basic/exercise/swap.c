#include <stdio.h>
//함수 정의
void swap_values(int* pFirst_value, int* pSecond_value);

int main(void) {

    int first_value = 100;
    int second_value = 200;

    printf("%d, %d\n", first_value, second_value);

    swap_values(&first_value, &second_value);

    printf("%d, %d\n", first_value, second_value);

    return 0;
}


void swap_values(int* pFirst_value, int* pSecond_value) {
    int temp = 0;

    temp = *pFirst_value;
    *pFirst_value = *pSecond_value;
    *pSecond_value = temp;
}