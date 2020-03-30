#include <stdio.h>

int main(void) {

    int my_int_array[] = {11,22,33,44,55,66,77};
    int* pInt_value = &(my_int_array[0]);

    int size = (sizeof(my_int_array)/sizeof(int));
    int min = pInt_value[0];
    int max = pInt_value[0];
    int sum = min;

    for(int i=1; i<size; i++) {
        int n = *(pInt_value+i);
        min = min > n ? n : min;
        max = max < n ? n : max;
        sum += n;
        printf(" i 값 : %d\n", n);
    }

    printf("최소값 : %d\n", min);
    printf("최대값 : %d\n", max);
    printf("평균값 : %05.2f", (double)sum/size);

    return 0;
}