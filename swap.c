#include <stdio.h>

void swap(int*,int*);
void swap(int* x,int* y){
   int temp = *x;
   *x = *y;
   *y = temp;
}


int main() {
    int fnum;
    int snum;
    printf("Enter First number :\n");
    scanf("%d",&fnum);
    printf("Enter Second number :\n");
    scanf("%d",&snum);

    printf("Before Swapping: first num-%d and Second num-%d \n",fnum,snum);
    
    swap(&fnum,&snum);
    printf("After Swapping: first num-%d and Second num-%d \n",fnum,snum);
    
    return 0;
}