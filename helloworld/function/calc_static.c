#include <stdio.h>

int g_sum = 0;

void add_person(int num_person) {
    static int s_sum = 0;
    int local_sum = 0;

    local_sum += num_person;
    s_sum += num_person;
    g_sum += num_person;

    printf("%d�� �߰�, �հ� : %d (����) , %d (����) , %d (����) \n", num_person, local_sum, s_sum, g_sum);
}

int main(void) {

    add_person(1);
    add_person(1);

    int i=0;
    for(i=0; i<10; i++) {
        add_person(i);
    }
    
    return 0;
}