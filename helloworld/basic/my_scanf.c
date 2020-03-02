#include <stdio.h>

int main(void) {
    int width = 0, height = 0;
    int result = 0;

    printf(" 밑병릉 입력 후 엔터를 치세요 : ");
    scanf("%d", &width);

    printf(" 높이를 입력 후 엔터를 치세요 : ");
    scanf("%d", &height);

    result = width * height;
    printf(" 넓이:%d", result);
}