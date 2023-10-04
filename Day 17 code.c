// Code for Dat 17
#include<stdio.h>

int main() {
// Code to print the factorial of a number n(given by user)
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    printf("Factorial is %d\n", fact);
    
    return 0;
}