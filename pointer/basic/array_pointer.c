#include <stdio.h>

int main(void) {

    int int_array[3] = {1,2,3};
    int* pInt_value = NULL;

    pInt_value = &int_array[0];

    printf("pInt_value �ּ� : %x\n", pInt_value);

    printf("*pInt_value �� : %d\n", *pInt_value);

    return 0;
}