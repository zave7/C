#include <stdio.h>


int get_max_weight(int* pWeight, int element_count) {
    int i=0, result=0;

    if(NULL != pWeight && element_count > 0) {
        printf("sizeof(pWeight):%d, ���� ���� : %d\n", sizeof(pWeight), element_count);

        for(i=0; i<element_count; i++) {
            if(pWeight[i] > result) {
                result = pWeight;
            }
        }
    } else {
        printf("���� ! NULL ������ ���� �Ǵ� �迭 ũ�� : 0\n");
    }
}

int main(void) {


    return 0;
}