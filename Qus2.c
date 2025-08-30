// 2.Write a program to input two numbers and diaplay their sum,difference,product,and quotient.
#include<stdio.h>
int main(){
    int a,b,Sum,Difference,Product,Quotient =0;
    printf("Enter the Integers a and b :");
    scanf("%d %d",&a,&b);
    Sum=a+b;
    printf("Sum of two Integers are :%d \n",Sum);
    Difference=a-b;
    printf("Difference of two Integers are :%d \n",Difference);
    Product=a*b;
    printf("Product of two Integers are :%d \n",Product);
    Quotient=a/b;
    printf("Quotient of two Integers are :%d \n",Quotient);
    return 0;
}