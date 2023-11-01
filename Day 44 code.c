// Code for Day 44
#include<stdio.h>
// Code of a simple calculator
int main() {
    char op;
    float result, num1, num2;
    printf("Enter the operator (+, -, *, /) : ");
    scanf("%c", &op);
    printf("Enter first number : ");
    scanf("%f", &num1);
    printf("Entrer second number : ");
    scanf("%f", &num2);
    
    switch(op) {
    case '+':
        result = num1 + num2;
        printf("Sum is %f\n", result);
        break;
        
        case '-':
        result = num1 - num2;
        printf("Subtraction is %f\n", result);
        break;
        
        case '*':
        result = num1 * num2;
        printf("Multiplication is %f\n", result);
        break;
        
        case '/':
        result = num1 / num2;
        printf("Division is %f\n", result);
        break;
        
        default:
        printf("You have entered an nvalid input");
        
    }
    return 0;
}