#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    int i = 0;
    int count = 3;
    int* pInt_array = NULL;

    pInt_array = (int*) malloc(sizeof(int) * count);
    if(NULL != pInt_array) {
        printf("함수 memset() 호출 이전\n");
        for(i=0; i<count; i++) {
            printf("%d: %d\n", i, pInt_array[i]);
        }
        memset(pInt_array, 0, sizeof(int) * count);// 해당 주소에 값을 초기화
        printf("함수 memset( ) 호출 이후 \n");
        for(i = 0; i < count; i++) {
            printf("%d: %d\n", i, pInt_array[i]);
        }
        if(NULL != pInt_array) free(pInt_array);
    }

    return 0;
}