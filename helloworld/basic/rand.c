#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(1);
    // printf("%d", RAND_MAX);
    printf("%d\n", rand());
    printf("%u", time(NULL));
    return 0;
}