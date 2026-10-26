//AREA OF SQ AND CL
#include <stdio.h>
#include<math.h>

int areaofsq();
int areaofcl();

int main(){
    int side;
    int radius;
    printf("Enter a the side of a square :");
    scanf("%d",&side);
    areaofsq(side);
    printf("Enter the radius of the circle :");
    scanf("%d",& radius);
    areaofcl(radius);
    return 0;
}

int areaofsq(int x){
    int square = x * x ;
    printf("the square is : %d \n",square);

}

int areaofcl(int x){
    float area = 3.14*(pow(x,2));
    printf("the area of the circle is : %f \n",area);
}
