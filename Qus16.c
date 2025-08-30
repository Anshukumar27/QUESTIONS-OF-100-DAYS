#include<stdio.h>
int main(){
    int a ,b,c;
    printf("Enter integer a :");
    scanf("%d",&a);
    printf("Enter integer b :");
    scanf("%d",&b);
    printf("Enter integer c :");
    scanf("%d",&c);
    if(a>=b && a>=c){
        printf("a is largest integer");
    }
    else if(b>=a && b>=c){
        printf("b is largest integer");
    }
    else{
        printf("c is largest integer");
    }
}