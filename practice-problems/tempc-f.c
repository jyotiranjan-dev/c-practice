//CONVERSTION OF TEMP CELSIUS TO FARENHIEITE 
#include<stdio.h>

float tempconvert(float celsius);


int main(){
    printf("The temperature in Fahrenheit is : %f ", tempconvert(32));
    return 0 ;
}

float tempconvert(float celsius){
    float far = celsius * (9.0/5.0)+ 32 ;
    return far ;
}
