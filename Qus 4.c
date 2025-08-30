#include<stdio.h>
#define PI = 3.14;
int main(){
    float radius, Cicumference,Area;
    printf("Enter Radius is:");
    scanf("%f",&radius);
    Area=PI * radius * radius;
    printf("Area of Circle is : %f \n",Area);
    Cicumference= 2 * PI * radius;
    printf("Circumference of circle is : %f \n",Cicumference);
    return 0;
}