#include <stdio.h>

int main(void) {

    int int_array[3] = {1,2,3};
    int* pInt_value = NULL, * pInt_mid_value = NULL;
    int temp_value = 0;

    pInt_value = &int_array[0];
    temp_value = *pInt_value;
    printf("pInt_value 林家: %x\n", pInt_value);
    printf("*pInt_value 蔼: %d\n", temp_value);

    pInt_mid_value = pInt_value +1;
    temp_value = *pInt_mid_value;
    printf("pInt_mid_value 林家: %x\n", pInt_mid_value);
    printf("*pInt_mid_value 蔼: %d", temp_value);

    return 0;
}