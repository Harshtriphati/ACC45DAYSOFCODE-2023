// Code for Day 31
#include<stdio.h>

int main() {
// Code To print Fibonacci Series
    int a = 0, b = 1;// First and second term 
    int n;
    printf("Enter the term till where you want to find the Fibonacci Series : ");
    scanf("%d", &n);
    
    int nextTerm = a + b;
    
    printf("Fibonacci Series is : %d\n %d\n", a, b);
    
    for(int i = 3; i < n; ++i) {
        printf("%d\n", nextTerm);
        a = b;
        b = nextTerm;
        nextTerm = a + b;
    }
    return 0;
}