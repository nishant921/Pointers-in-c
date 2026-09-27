// Write a program to change the value of a variable to ten times its current value.

#include <stdio.h>


void change(int*);
void change(int* x){
    *x = *x *10;
}

int main() {

    int i = 10;
    printf("The Value of i: %d\n",i);
    change(&i);
    printf("The changed Value of i: %d",i);
    
    return 0;
}