#include <stdio.h>

int basic_calc(double value1, double value2, int type, double *pResult);

int main(void) {

    int type = 0, error_no = 0, result = 0;
    double value1 = 0, value2 = 0, result = 0;

    printf("ù��° �ι�° ���� ? ");
    scanf("%lf %lf", &value1, &value2);

    printf("������ ������(1: +, 2:-, 3:*, 4:/)? ");
    scanf("%d", &type);

    error_no = basic_calc(value1, value2, type, &result);
    if(0 == error_no) {
        printf("������ : %f\n", result);
    } else {
        printf("���� ���� ������ �߻��߽��ϴ�[%d]\n", error_no);
    }

    return 0;
}