#include <stdio.h>

int main(void) {

    int int_array[3] = {1,2,3};
    int* pInt_value = NULL, * pInt_mid_value = NULL;
    int temp_value = 0;

    pInt_value = &int_array[0];
    temp_value = *pInt_value;
    printf("pInt_value �ּ�: %x\n", pInt_value);
    printf("*pInt_value ��: %d\n", temp_value);

    pInt_mid_value = pInt_value +1;
    temp_value = *pInt_mid_value;
    printf("pInt_mid_value �ּ�: %x\n", pInt_mid_value);
    printf("*pInt_mid_value ��: %d", temp_value);

    return 0;
}