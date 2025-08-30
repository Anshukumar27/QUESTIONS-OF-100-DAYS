#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter the number n :");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("Sum of first n natural number is : %d",sum);
    return 0;
}