//FACTORIL OF N USING RECURSION
#include<stdio.h>

int factorialofn(int n);

int main(){
    printf("The factorial of is : %d " ,factorialofn(5));
    return 0;
}

int factorialofn(int n){
    if (n == 0 ){
        return 1;
    }
    int factNm1 = factorialofn(n-1);
    int factN = factNm1 * n ;
    return factN ;
}
