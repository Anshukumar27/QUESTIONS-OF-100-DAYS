#include<stdio.h>
int main(){
    int Length,Breadth,Area,Perimeter;
    printf("Enter Length and Breadth are:");
    scanf("%d %d",&Length,&Breadth);
    Area=(Length*Breadth);
    printf("Area of Reactangle is : %d \n",Area);
    Perimeter=2*(Length + Breadth);
    printf("Perimeter of Rectangle is : %d \n",Perimeter);
    return 0;
}