// Write a program having a variable i . Print the address of i . Pass this variable to a function and print its address. Are these addresses the same? Why?

#include <stdio.h>

int address(int*);
int address(int* ptr){
    printf("The Address of passed varibale : %u",ptr);
    printf("The value  : %u\n",*ptr);
    return 0;
}

int main() {

    int i = 69;
    int *ptr = &i;
    printf("The Address of i: %u\n",ptr);

    address(ptr);
    return 0;
}