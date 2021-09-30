#include <stdio.h>
#include <stdlib.h>


int main(){
    char c = 'c';
    int i = 5;
    long l = 92233720368547742;

    printf("Variable is %c\nHex: %p\nDecimal:%lu\n", c, &c, &c);
    printf("Variable is %i\nHex: %p\nDecimal:%lu\n", i, &i, &i);
    printf("Variable is long\nHex: %p\nDecimal:%lu\n", l, &l, &l);

    char *pointer_c = &c;
    int *pointer_i = &i;
    long *pointer_l = &l;

    printf("char pointer: %p\nint pointer: %p\nlong pointer: %p\n", pointer_c, pointer_i, pointer_l);

}