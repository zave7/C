#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i=0;
    int count = 0;
    double* pBMI = NULL;

    printf("원소의 개수는? ");
    scanf("%d", &count); //count변수가 할당된 메모리 주소

    if(count <= 0) {
        printf("원소의 갯수가 0보다 커야합니다.");
        return 0;
    }

    pBMI = (double*)malloc(sizeof(double) * count); // pBMI 자료형의 크기 * count 만큼의 메모리 할당 double* 로 형변환하여 컴파일러에게 명시

    if(NULL != pBMI) {
        printf("메모리 할당 성공, 원소의 갯수 : %d, 배열의 크기 : %d\n", count, sizeof(double) * count);
        for(i=0; i<count; i++) {
            *(pBMI + i) = 10.0 * i;

            printf("%d -> %f\n", i, *(pBMI + i)); //pBMI + i pBMI 자료형 크기만큼 주소값을 더함
        }
        //메모리 해제가 없음
    } else {
        printf("메모리 할당에 실패했습니다.");
    }
    return 0;
}