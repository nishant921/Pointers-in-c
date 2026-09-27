// Write a program to print the address of a variable. Use this address to get the value of the variable

#include <stdio.h>

int main() {
    int i = 100;
    int* address = &i;
    printf("%u\n",address);
    printf("%d\n",*address);
    return 0;
}