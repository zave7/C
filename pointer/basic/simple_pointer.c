#include <stdio.h>

int main(void) {

    int int_value = 9; // ������ ���� ����

    int*pInt_value = NULL; // ������ ���� ����

    pInt_value = &int_value; // int_value�� �ּ� ����

    //printf("int_value: %d\n", int_value );
    //printf("pInt_value: %x\n", pInt_value );
    ///printf("*pInt_value: %d\n", *pInt_value );
    //printf("%x", NULL);
    
    if(NULL == 0) {
        printf("NULL�� 0�̴�");
    }

    return 0;
}