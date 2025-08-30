#include<stdio.h>
#include<math.h>
double a , b,c;
double root1,root2,realPart,imaginaryPart,discriminant;
int main(){
    printf("Enter coefficients a , b and c :");
    scanf("%lf %lf %lf",&a,&b,&c);
    discriminant=b*b - 4*a*c;
    if(discriminant>0){
        root1=(-b + sqrt(discriminant)) / (2*a);
        root2=(-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different \n");
        printf("root1 = %.2lf \n",root1);
        printf("root2 = %.2lf \n",root2);
    }
    else if(discriminant==0){
        root1=root2=-b/(2*a);
        printf("Roots are real and same \n");
        printf("root1 = root2 = %.2lf \n",root1);
    }
    else{
        realPart=-b/(2*a);
        imaginaryPart=sqrt(-discriminant)/(2*a);
        printf("Roots are complex and different \n");
        printf("root1 = %.2lf + %.2lfi \n",realPart,imaginaryPart);
        printf("root2 = %.2lf - %.2lfi \n",realPart,imaginaryPart);
    }
    return 0;
}