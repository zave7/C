#include <stdio.h>
#include <stdlib.h>

void doInput(int count, int* pScore);
double getAverage(int count, int* pScore);

int main(void) {

    int count = 0;
    int *pScore = NULL;
    double average = 0;

    do {
        printf("�л� ���� ? (0 ������ ���� �Է��ϸ� ����˴ϴ�.)");
        scanf("%d", &count);
        if(count > 0) {
            //1. �޸𸮸� �Ҵ� �� �����ϰ� doInput(), getAgerage() �Լ� ȣ��
            pScore = (int*)malloc(sizeof(int) * count); //���⼭ �޸𸮸� �Ҵ������ �Ѵ� 
            // doInput ���� �Ҵ����ٰ�� �ּҰ��� ����Ǿ� �޸� �Ҵ��� �̷������ ������ �ش� �޸��ּ� �����صа��� �Ҿ������.

            doInput(count, pScore);
            if(pScore != NULL) {
                printf("pScore�� NULL�� �ƴ�\n");
            } else {
                printf("pScore�� NULL\n");
            }
            average = getAverage(count, pScore);

            printf("��� ������ %f�Դϴ�. \n", average);
            printf("�ٽ� ȸ������ �Է��ϼ���\n");
        } else {
            printf("0 �̻� �Է��ؾ��մϴ�.");
        }
        if(pScore != NULL)
            free(pScore);
    } while(count > 0);

    return 0;
}


void doInput(int count, int* pScore) {
    //2. count ũ�⸸ŭ �ݺ��ϸ� ������ �Է�
    int score = 0;

    if(pScore != NULL) {
        for(int i = 0; i<count; i++) {
            printf("%d �� �л� ���� : ", i+1);
            scanf("%d", &score);
            *(pScore+i) = score;
        }
    } else {
        printf("�޸� �Ҵ翡 �����߽��ϴ�.\n");
    }
}

double getAverage(int count, int* pScore) {
    //3. ��հ� ���
    int sum = 0;

    if(pScore != NULL) {
        for(int i = 0; i<count; i++) {
            sum += *(pScore+i);
        }
    } else {
        printf("�˼����� ����\n");
    }

    return (double)sum/count;
}