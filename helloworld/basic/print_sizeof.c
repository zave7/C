#include <stdio.h>

int main (void) {
    char value_char = 0;
    short value_short = 0;    
    int value_int = 0;    
    long value_long = 0;    

    printf("sizeod(value_char)=%d\n", sizeof(value_char));
    printf("sizeod(value_short)=%d\n", sizeof(value_short));
    printf("sizeod(value_int)=%d\n", sizeof(value_int));
    printf("sizeod(value_long)=%d\n", sizeof(value_long));

    value_char = 0x7f;
    value_int = 011;
    printf("char : %d", value_char);
    printf("int : %d", value_int);

    //��κ��� �ü������ ���� ������ �⺻������ int ���̴�
    //�׷��⿡ �Ӻ����ý��۰��� �޸��� ������ ū ȯ���� �����ϰ�� Int ���� �����ϴ°� �ٶ����ϴ�

    //������ ����� ���ÿ� �ʱ�ȭ���ϴ°��� ����

    //���� ���ʿ� �ִ� �ֻ�����Ʈ (MSB) �� 0�̸� ��� 1�̸� �����̴�
}