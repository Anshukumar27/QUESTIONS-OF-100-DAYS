
//compound interest
#include<stdio.h>
#include<math.h>
int main(){
    double principle = 10000;
    double rate = 5;
    double time = 2;
    double Amoint= principle *(( pow((1 + rate / 100), time)));
    double CI = Amoint - principle;
    printf("Compound Interest: %1f", CI);
    return 0;
}