#include <stdio.h>
#include <stdlib.h>

void doInput(int count, int* pScore);
double getAverage(int count, int* pScore);

int main(void) {

    int count = 0;
    int *pScore = NULL;
    double average = 0;

    do {
        printf("학생 수는 ? (0 이하의 수를 입력하면 종료됩니다.)");
        scanf("%d", &count);
        if(count > 0) {
            //1. 메모리를 할당 및 해제하고 doInput(), getAgerage() 함수 호출
            pScore = (int*)malloc(sizeof(int) * count); //여기서 메모리를 할당해줘야 한다 
            // doInput 에서 할당해줄경우 주소값이 복사되어 메모리 할당이 이루어지기 때문에 해당 메모리주소 저장해둔것을 잃어버린다.

            doInput(count, pScore);
            if(pScore != NULL) {
                printf("pScore는 NULL이 아님\n");
            } else {
                printf("pScore는 NULL\n");
            }
            average = getAverage(count, pScore);

            printf("평균 점수는 %f입니다. \n", average);
            printf("다시 회원수를 입력하세요\n");
        } else {
            printf("0 이상 입력해야합니다.");
        }
        if(pScore != NULL)
            free(pScore);
    } while(count > 0);

    return 0;
}


void doInput(int count, int* pScore) {
    //2. count 크기만큼 반복하며 점수를 입력
    int score = 0;

    if(pScore != NULL) {
        for(int i = 0; i<count; i++) {
            printf("%d 번 학생 점수 : ", i+1);
            scanf("%d", &score);
            *(pScore+i) = score;
        }
    } else {
        printf("메모리 할당에 실패했습니다.\n");
    }
}

double getAverage(int count, int* pScore) {
    //3. 평균값 계산
    int sum = 0;

    if(pScore != NULL) {
        for(int i = 0; i<count; i++) {
            sum += *(pScore+i);
        }
    } else {
        printf("알수없는 오류\n");
    }

    return (double)sum/count;
}