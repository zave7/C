#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    int i = 0;
    int count = 3;
    int* pInt_array = NULL;

    pInt_array = (int*) calloc(count, sizeof(int)); // 원소의 크기와 원소의 갯수를 인자로 받음
                                                    // 초기화 까지 해줌

    if(NULL != pInt_array) {
        printf("memset() 함수 호출 이전\n");
        for(i=0; i<count; i++) {
            printf("%d: %d\n", i, pInt_array[i]);
        }
        if(NULL != pInt_array) free(pInt_array);
    }

    return 0;
}