// Code for Day 16
#include<stdio.h>

int main() {
// Code to print all the odd numbers from 1 to n(given by user)
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}