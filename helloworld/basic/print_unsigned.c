#include <stdio.h>
#include <limits.h>

int main(void) {
    unsigned char value_char = 0;
    unsigned short value_short = 0;
    unsigned int value_int = 0;
    unsigned long value_long = 0;

    value_char = 0xff;
    value_short = 0xffff;
    value_int = 0xffffffff;
    value_long = 0xffffffff;

    printf("%u", value_char);
    printf("\n");
    printf("%u", value_short);
    printf("\n");
    printf("%u", value_int);
    printf("\n");
    printf("%u", value_long);

    unsigned long long value_longlong = 0LL;

    //long long 인경우 점미어 LL 혹은 ll을 붙여야 함
    value_longlong = 0xffffffffffffffffLL;
    printf("\n");
    printf("%llu", value_longlong);
    printf("\n");
    printf("%u", ULONG_MAX);

    int int_value1 = 1;
    int int_value2 = 12;
    int int_value3 = 123;
    printf("\n");
    printf("%5d",int_value1);

return 0;
     
}