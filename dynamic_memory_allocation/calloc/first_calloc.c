#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    int i = 0;
    int count = 3;
    int* pInt_array = NULL;

    pInt_array = (int*) calloc(count, sizeof(int)); // ������ ũ��� ������ ������ ���ڷ� ����
                                                    // �ʱ�ȭ ���� ����

    if(NULL != pInt_array) {
        printf("memset() �Լ� ȣ�� ����\n");
        for(i=0; i<count; i++) {
            printf("%d: %d\n", i, pInt_array[i]);
        }
        if(NULL != pInt_array) free(pInt_array);
    }

    return 0;
}