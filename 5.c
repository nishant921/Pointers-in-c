// Write a program to print the value of a variable i by using a pointer to pointer type variable.

#include <stdio.h>

int main() {

    int i = 10;
    int *ptr = &i;
    int ** ptr2 = &ptr;

    printf("The value of i: %d\n",i);
    printf("The value of i throught pointer 1: %d\n",*ptr);
    printf("The value of i throught pointer to pointer: %d\n",**ptr2);
    return 0;
}