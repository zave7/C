// 사용자로부터 원소의 개수 입력받기
// 동적으로 Int형 배열 할당
// 사용자가 입력한 원소의 개수가 0이나 0보다 작은 값이면 프로그램 종료
// 1. 기존 원소 개수 보다 작으면 무시하고 다시 원소의 개수 입력받기
// 2. 기존 원소 개수보다 크면 메모리 확장
// 3. 이때 추가되는 원소에 대해서는 사용자로부터 값을 입력받기
// 4. 사용자로부터 원소의 개수를 입력받기 전에, 현재 원소의 개수와 원소의 값 출력

// 함수 
//     - 원소 갯수 입력받기 getElementCount
//     - 입력값 체크 checkElementCount
//     - 메모리 확장 extendMemory
//     - 원소 갯수 원소 출력 printElements
//     - 원소 입력 받기 getElements

#include <stdio.h>
#include <stdlib.h>

int getElementCount(int elementCount);
short checkElementCount(int elementCount);
void extendMemory(int count, int * array);
void printElements();
int* getElements(int num);

int main(void) {

    int * array = NULL;

    int static elementCount = 0;

    int getElementCnt = getElementCount(elementCount);

    if(getElementCnt == -1) {
        return 0;
    }

    if(elementCount < getElementCnt ) {
        extendMemory(getElementCnt - elementCount, array);
        elementCount = getElementCnt;
    }    

    return 0;
}

void extendMemory(int count, int * array) {
    int * temp = NULL;
    
    temp = realloc(array, count);

    if(temp != NULL) {
        if(array != temp) {
            free(array);
            array = temp;
        }
    }

    int n = 0;

    int size = sizeof(array) / sizeof(int);

    for(int i=0; i<=count; i++) {

        printf("원소를 입력하세요 %d. : ", i);
        scanf("%d", &n);
        *(array+i) = n;
        
    }

    printf("원소 입력이 끝났습니다.");
    


}

int getElementCount(int elementCount) {

    if(elementCount > 0) {
        printf("현재 원소의 갯수 : %d\n" + elementCount);
    }

    int i = 0;
    printf("원소의 갯수를 입력해주세요 ( 0개 이상 ) : ");
    scanf("%d", &i);

    if(i <= 0) {
        printf("0 이하의 값을 입력하였습니다. \n프로그램을 종료합니다.");
        return -1;
    } else {
        return i;
    }

}