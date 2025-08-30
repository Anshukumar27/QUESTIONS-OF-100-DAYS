#include<stdio.h>
int main(){
    int seconds,minutes,hours,days;
    printf("Enter the seconds :");
    scanf("%d",&seconds);
    minutes=seconds/60;
    hours=minutes/60;
    printf("Minutes is : %d \n",minutes);
    printf("Hours is : %d \n",hours);   
    return 0;

}