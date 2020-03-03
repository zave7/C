#include <stdio.h>

int recursive( int);

int sum(int);

int main(void) {
    
    int input = 0;

    printf("모두 더할 숫자를 입력하세요 : ");
    scanf("%d", &input);
    int result = sum(input);
    printf("result : %d", result);

    // printf("팩토리얼을 계산할 숫자를 입력하세요 : ");
    // scanf("%d", &input);
    // int result = recursive(input);
    // printf("result : %d", result);
}

int recursive(int input) {

    if(input == 1) {
        return 1;
    } else {
        return input * recursive(input-1);
    }
}

int sum(int input) {
    printf("%d", input);
    if(input == 1) {
        return 1;
    } else {
        return input + sum(input -1);
    }
}