#include <stdio.h>

int main(void) {

    char char_array[] = "ace";
    char* pChar = NULL;

    pChar = char_array;

    printf("pChar�� �� %x\n", pChar);
    printf("char_array�� �� %x\n", char_array);
    printf("*pChar�� �� : %c\n", *pChar);
    printf("*char_array �� �� : %c \n", *char_array);
    printf("char_array[0]�� �� : %c \n", char_array[0]);

    printf("pChar+1 �� �� : %x\n", pChar + 1);
    printf("char_array �� �� : %x \n", char_array + 1);

    printf("*(pChar + 1) �� �� : %c \n", *(pChar + 1));
    printf("*(char_array + 1) �� �� : %c \n", *(char_array + 1));

    return 0;
}