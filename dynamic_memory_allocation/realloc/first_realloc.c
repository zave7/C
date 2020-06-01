#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    int i = 0;
    int count = 2;
    int* pint_array = NULL;
    int* pint_array2 = NULL;

    pint_array = (int*) malloc(sizeof(int) * count);
    if(NULL != pint_array) {
        memset(pint_array, 0, sizeof(int) * count);

        printf("�Լ� memset() ȣ�� ���� \n");
        for(i=0; i<count; i++) {
            printf("%d: %d\n", i, pint_array[i]);
        }
        count = 3;
        pint_array2 = (int*) realloc(pint_array, sizeof(int) * count);
        if(NULL != pint_array2) {
            printf("�Լ� realloc() ȣ�� ���� \n");

            if(pint_array == pint_array2) {
                printf("���� �޸� �ּ� %x�� ������� Ȯ���", pint_array);
            } else {
                printf("���� �޸� �ּ� %d , ���ο� �޸� �ּ� %x ������� Ȯ���\n", pint_array, pint_array2);
            }
            for(i=0; i<count; i++) {
                printf("%d : %d\n", pint_array2[i]);
            }
        }
        // --- �� �κ�
        if(NULL != pint_array2 && pint_array != pint_array2) {
            free(pint_array2);
            pint_array = NULL;
        } else if(NULL != pint_array2 && pint_array == pint_array2) {
            free(pint_array);
            pint_array2 = NULL;
        }
        if(NULL != pint_array)
            free(pint_array);
        if(NULL != pint_array2)
            free(pint_array2);
   
    }
    
    return 0;
}