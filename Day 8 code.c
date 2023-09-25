// Code for Day 8
#include<stdio.h>

int main() {
// Code for printing the n natural numbers in reverse order
    int i,n;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    for(i = n; i >= 1; i--) {
        printf("%d\n", i);
    }
    return 0;
}