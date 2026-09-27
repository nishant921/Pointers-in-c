#include <stdio.h>

int change(int *,int);
int change(int* x,int y){
    *x = y+100 ;
}


int main(){
    int x = 10;
    change(&x,x);
    printf("The value of x: %d",x);
} 