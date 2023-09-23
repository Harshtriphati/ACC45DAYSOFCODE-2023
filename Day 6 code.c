// Code for Day 6
#include<stdio.h>

int main() {
// Code to determine whether the number entered by user is even or odd
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    n % 2 == 0 ? printf("Entered number is even\n") : printf("Entered number is odd\n");
    return 0;
}