#include <stdio.h>

int main(void) {

    float value_f = 0;
    for(int i=0; i<20; i++) {
        value_f = value_f+0.3f;
        
    }
    printf("%f", value_f);

    double value_d = 0;
    for(int i=0; i<20; i++) {
        value_d += 0.3;
    }
    printf("%f", value_d);
    return 0;

    //�ڵ�����ȯ : ����ȯ�� �ڷ��� �ս��� �ּ�ȭ�ϴ� �������� �Ͼ�� �ڷ����� ũ��, �Ǽ� �ڷ���
}