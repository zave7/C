#include <stdio.h>

int main(void) {
    int width = 0, height = 0;
    int result = 0;

    printf(" �غ��� �Է� �� ���͸� ġ���� : ");
    scanf("%d", &width);

    printf(" ���̸� �Է� �� ���͸� ġ���� : ");
    scanf("%d", &height);

    result = width * height;
    printf(" ����:%d", result);
}