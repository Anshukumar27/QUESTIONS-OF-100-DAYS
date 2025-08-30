#include<stdio.h>
int main(){
    int a , b;
    printf("Enter two integers :");
    scanf("%d %d",&a,&b);
    // sawping using without third variable
    a=a+b; // a=15 (10+5)
    b=a-b; // b=10 (15-5)
    a=a-b; // a=5 (15-10)
    printf("After swapping : a=%d , b=%d",a,b);
    return 0;
}