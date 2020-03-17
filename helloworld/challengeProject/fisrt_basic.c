#include <stdio.h>

int main(void) {

    int num_student = 0;
    int score_student[100] = {0};
    int total_score = 0;
    double average_score = 0;

    int i =0;

    printf("학생 수는 ? : ");
    //코드 작성
    scanf("%d", &num_student);

    printf("학생 수 : %d\n", num_student);

    if(num_student <= 0 || num_student > 100) {
        printf("학생 수는 1명이상 100명 이하가 되어야 합니다");
        return 0;
    }
    //코드 작성
    for(int j=1; j<=num_student; j++) {
        printf("%d번째 학생 점수는 ? ", j);
        scanf("%d", &score_student[j-1]);
    }

    for(i = 0; i<num_student; i++) {
        total_score += score_student[i];
    }
    //코드 작성
    average_score = total_score/num_student;

    printf("학생 수 : %d\n총점 : %d\n평균 : %f\n", num_student, total_score, average_score);

    return 0;
}