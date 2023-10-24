// Code for Day 37
#include<stdio.h>

int main() {
// Code to print sum of all digits in a number entered by User 
    int d, sum, num;
    printf("Enter the number : ");
    scanf("%d", &num);
    sum = 0;
    
    while(num > 0) {
        d = num % 10;
        sum = sum + d;
        num = num / 10;
    }
    printf("Sum of number of digits is the entered number is %d", sum);
    
    return 0;
}
