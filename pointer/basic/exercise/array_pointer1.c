#include <stdio.h>

int main(void) {

    int my_int_array[] = {10,20,30,40,50,60,70};
    int* pInt_value = &(my_int_array[0]);

    int input = 0;
    printf("�Է� : ");
    scanf("%d", &input);

    printf("�ε��� %d�� �ش��ϴ� ���� %d�Դϴ�", input, *(pInt_value + input));
    //������ ������ +������ �ϸ� �ش� �ڷ��� ũ�� ��ŭ �ּҰ��� ��������

    return 0;
}