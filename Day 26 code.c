// Code for Day 26
#include<stdio.h>

int main() {
// Code to find greatest number between three numbers entered by user
    int num1, num2, num3;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("Enter third number : ");
    scanf("%d", &num3);
    
    if (num1 > num2 && num1 > num3) {
        printf("%d is the greatest number among all\n", num1);
    }else if (num2 > num1 && num2 > num3) {
        printf("%d is the grastest number among all\n", num2);
    }else {
        printf("%d is the greatest number among all\n", num3);
    }
    return 0;
}