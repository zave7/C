#include <stdio.h>

int main(void) {

    int num_student = 0;
    int score_student[100] = {0};
    int total_score = 0;
    double average_score = 0;

    int i =0;

    printf("�л� ���� ? : ");
    //�ڵ� �ۼ�
    scanf("%d", &num_student);

    printf("�л� �� : %d\n", num_student);

    if(num_student <= 0 || num_student > 100) {
        printf("�л� ���� 1���̻� 100�� ���ϰ� �Ǿ�� �մϴ�");
        return 0;
    }
    //�ڵ� �ۼ�
    for(int j=1; j<=num_student; j++) {
        printf("%d��° �л� ������ ? ", j);
        scanf("%d", &score_student[j-1]);
    }

    for(i = 0; i<num_student; i++) {
        total_score += score_student[i];
    }
    //�ڵ� �ۼ�
    average_score = total_score/num_student;

    printf("�л� �� : %d\n���� : %d\n��� : %f\n", num_student, total_score, average_score);

    return 0;
}