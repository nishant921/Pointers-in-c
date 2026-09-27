// Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the address of sum and average in main().

// just for practice no real use


#include <stdio.h>

int* sum(int,int);
float* avg(int x,int y);
int* sum(int x,int y){
    int s = x+y;
    int ptr = &s;
    printf("The Sum of x: %d and y: %d = %d\n",x,y,s);
    return ptr;
}
float* average(int x,int y){
    float avg = (x+y)/2.0;
    int ptr2 = &avg;
    printf("The Average of x: %d and y: %d = %.3f\n",x,y,avg);
    return ptr2;
}

int main() {
    
    int a = 12;
    int b = 24;

    int* ptr1 = sum(a,b);
    float* ptr2 = average(a,b);
    printf("The Address of Sum: %u and Average: %u",ptr1,ptr2);
    return 0;
}