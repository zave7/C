#include <stdio.h>

int main(void) {
    int input = 0;

    printf(" �����Է� : ");
    scanf("%d", &input);

    if(input & 0x02) {
        printf("�ι�° ��Ʈ�� 1�Դϴ�,");
    } else {
        printf("�ι�° ��Ʈ�� 1�� �ƴմϴ�.");
    }

    //���������� �Ǽ����꺸�� ������
    //������ ������ ���꺸�� ������
    //unsigned ���� signed�� ���� ������
}