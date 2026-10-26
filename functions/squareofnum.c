#include<stdio.h>
#include<math.h>

int square();

int main(){
    int x ;
    printf("enter a num :");
    scanf("%d",&x);
    square(x);
    return 0;
}

int square(int x){
    int sq = pow(x,2);
    printf("The square of %d is : %d ",x,sq);
}
