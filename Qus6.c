// 6.Write a program to swap two numbers using a third variable.;
#include<stdio.h>
int main(){
    int x,y,temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    //swaping
    temp = x;
    x = y;  
    y = temp;
    printf("After swapping: x = %d, y = %d\n", x, y);
}