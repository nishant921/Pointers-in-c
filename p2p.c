#include <stdio.h>

int main() {

    int a = 10;
    int* p1 = &a; 
    int** p2 = &p1;
    printf("The value of a: %d\n",a);
    printf("The address of a: %d\n",p1);
    printf("The address of p1: %d\n",&p1);
    printf("The value of a through p1: %d\n",*p1);
    printf("The value of a through &a: %d\n",*(&a));
    printf("The value of p1 address through *(&p1) : %d\n",*(&p1));
    printf("The value of a through **(&p1): %d\n",**(&p1));


    printf("The address of p1 pointer through p2: %d\n",p2);
    printf("The address of p2 pointer: %d\n",&p2);
    printf("The value of a throught pointer p2: %d\n",**p2);
    return 0;
}