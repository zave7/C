#include <stdio.h>

int main(void) {

    char test[512] = {0};
    scanf("%s", test);
    printf("%s\n", test);

    for(int i=0; i<512; i++) {
        if(test[i] == '\0') {
            printf("%d", i);
            break;
        }

    }
    return 0;
}