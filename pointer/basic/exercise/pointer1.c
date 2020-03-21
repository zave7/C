#include <stdio.h>

int main(void) {

    char char_value = 'C';
    int int_value = 100;
    double double_value = 100.5;

    char* pChar_value = NULL;
    int* pInt_value = NULL;
    double* pDouble_value = NULL;

    pChar_value = &char_value;
    pInt_value = &int_value;
    pDouble_value = &double_value;

    printf("char %d %x %c\n", sizeof(*pChar_value), pChar_value, *pChar_value);
    printf("int %d %x %d\n", sizeof(*pInt_value), pInt_value, *pInt_value);
    printf("double %d %x %f\n", sizeof(*pDouble_value), pDouble_value, *pDouble_value);
    printf("%d", sizeof(pChar_value));

    return 0;

}