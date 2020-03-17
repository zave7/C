#include <stdio.h>

int get_student_num();

int check_student_num(int student_num);

void get_student_scores(int score_kor[100], int num_student);

int calc_total_score(int score_kor[100], int num_student);

double calc_averate_score(int total_score, int num_student);

void print_score(int num_student, int total_score, double average_score);

int main(void) {

    int num_student = 0;
    int score_student[100] = {0};
    int total_score = 0;
    double average_score = 0;

    num_student = get_student_num();

    if(!check_student_num(num_student)) {
        return 0;
    }

    get_student_scores(score_student, num_student);

    total_score = calc_total_score(score_student, num_student);

    average_score = calc_averate_score(total_score, num_student);

    print_score(num_student, total_score, average_score);
    return 0;
}

int get_student_num() {
//��ü �л��� �Է�
    int num;
    printf("�л� ���� �Է��� : ");
    scanf("%d", &num);
    return num;
}

int check_student_num(int num_student) {
//��ȿ�ϸ�1 �ƴϸ� 0
    if(num_student <= 0 || num_student > 100) {
        return 0;
    } else {
        return 1;
    }
}

void get_student_scores(int score_student[100], int num_student) {
//�л� ���� ���� �Է�
    for(int i=0; i<num_student; i++) {
        printf("%d�� �л� ���� : ", i+1);
        scanf("%d", &score_student[i]);
    }
}

int calc_total_score(int score_kor[100], int num_student) {
//������ ������ ����
    int total = 0;
    for(int i=0; i<num_student; i++) {
        total += score_kor[i];
    }
}

double calc_averate_score(int total_score, int num_student) {
//���
    return (double)total_score/num_student;
}

void print_score(int num_student, int total_score, double averate_score) {
//���
    printf("�л� �� : %d\n���� : %d\n��� : %f\n", num_student, total_score, averate_score);
}


