// Code for Day 9
#include<stdio.h>

int main() {
// Code for printing the sum of first n natural numbers
    int i,n,sum;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    for(i = 0; i <= n; i++){
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}