#include <stdio.h>
int main() {
    int number, sum = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number != 0) {
        remainder = number % 10;  
        sum += remainder;         
        number = number / 10;     
    }
    printf("Sum of digits is %d\n", sum);
    return 0;
}
