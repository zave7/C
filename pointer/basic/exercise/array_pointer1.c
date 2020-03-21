#include <stdio.h>

int main(void) {

    int my_int_array[] = {10,20,30,40,50,60,70};
    int* pInt_value = &(my_int_array[0]);

    int input = 0;
    printf("입력 : ");
    scanf("%d", &input);

    printf("인덱스 %d에 해당하는 값은 %d입니다", input, *(pInt_value + input));
    //포인터 변수에 +연산을 하면 해당 자료형 크기 만큼 주소값이 더해진다

    return 0;
}