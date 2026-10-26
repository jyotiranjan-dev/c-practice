//print table using user defined function
#include<stdio.h>

void Printtable();


int main(){
    int a ;
    printf("enter a num : ");
    scanf("%d",&a);

    Printtable(a);
    return 0 ;
}

void Printtable(int n){
    for(int i = 1 ; i <= 10 ; i++){
        printf("%d * %d = %d \n",i, n , i*n);
    }
}
