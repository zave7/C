#include <stdio.h>


int main() {
    int i = 0, j = 0;
    int value = 0;

    int nSource[3][2] = {0}; //2차원 배열 선언

    for(i=0; i<3; i++) {
        for(j=0;j<2;j++) {
            nSource[i][j] = value;
            value++;
        }
    }

    for(i=0; i<3; i++) {
        for(j=0;j<2;j++) {
            
            printf("[%d][%d] => %d\n", i, j, nSource[i][j]);
        }
    }

    return 0;
}