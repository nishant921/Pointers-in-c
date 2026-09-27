#include<stdio.h>

int main(){

    // int a = 10;
    // int *b = &a;
    // printf("%d\n",a);
    // printf("%p\n",&a);
    // printf("%u\n",&a);
    // printf("%d\n",b);
    // printf("%p\n",&b);
    // printf("%d",*b);

    char gender  = 'm';
    char * address = &gender;
    printf("%u",address);
    return 0;
} 