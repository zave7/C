#include <stdio.h>

int main(void) {
    int a = 0;

    // if( a== 0) {
    //     goto test;
    // }

    // printf("날 지나쳐?");
    // test:
    // printf("test");

    for(int i = 0; i<19; i++) {
        printf("i : %d", i);
        if(i==1) {
            i = 19;
        }
    }

    for(;;) {
        printf("1");
    }
}