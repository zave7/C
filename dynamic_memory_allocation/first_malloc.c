#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i=0;
    int count = 0;
    double* pBMI = NULL;

    printf("������ ������? ");
    scanf("%d", &count); //count������ �Ҵ�� �޸� �ּ�

    if(count <= 0) {
        printf("������ ������ 0���� Ŀ���մϴ�.");
        return 0;
    }

    pBMI = (double*)malloc(sizeof(double) * count); // pBMI �ڷ����� ũ�� * count ��ŭ�� �޸� �Ҵ� double* �� ����ȯ�Ͽ� �����Ϸ����� ���

    if(NULL != pBMI) {
        printf("�޸� �Ҵ� ����, ������ ���� : %d, �迭�� ũ�� : %d\n", count, sizeof(double) * count);
        for(i=0; i<count; i++) {
            *(pBMI + i) = 10.0 * i;

            printf("%d -> %f\n", i, *(pBMI + i)); //pBMI + i pBMI �ڷ��� ũ�⸸ŭ �ּҰ��� ����
        }
        //�޸� ������ ����
    } else {
        printf("�޸� �Ҵ翡 �����߽��ϴ�.");
    }
    return 0;
}