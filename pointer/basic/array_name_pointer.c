#include <stdio.h>

int main(void) {

    char char_array[] = "ace";
    char* pChar = NULL;

    pChar = char_array;

    printf("pChar의 값 %x\n", pChar);
    printf("char_array의 값 %x\n", char_array);
    printf("*pChar의 값 : %c\n", *pChar);
    printf("*char_array 의 값 : %c \n", *char_array);
    printf("char_array[0]의 값 : %c \n", char_array[0]);

    printf("pChar+1 의 값 : %x\n", pChar + 1);
    printf("char_array 의 값 : %x \n", char_array + 1);

    printf("*(pChar + 1) 의 값 : %c \n", *(pChar + 1));
    printf("*(char_array + 1) 의 값 : %c \n", *(char_array + 1));

    return 0;
}