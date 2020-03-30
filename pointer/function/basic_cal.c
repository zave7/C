#include <stdio.h>

int basic_calc(double value1, double value2, int type, double *pResult);

int main(void) {

    int type = 0, error_no = 0, result = 0;
    double value1 = 0, value2 = 0, result = 0;

    printf("첫번째 두번째 값은 ? ");
    scanf("%lf %lf", &value1, &value2);

    printf("연산의 종류는(1: +, 2:-, 3:*, 4:/)? ");
    scanf("%d", &type);

    error_no = basic_calc(value1, value2, type, &result);
    if(0 == error_no) {
        printf("연산결과 : %f\n", result);
    } else {
        printf("연산 도중 오류가 발생했습니다[%d]\n", error_no);
    }

    return 0;
}