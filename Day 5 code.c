// Code for Day 5
#include<stdio.h>

int main() {
//Code for printing odd numbers till the number entered by user
    int i,n;
    printf("Enter the number till where you want output : ");
    scanf("%d", &n);
    for(i = 1; i <= n; i = i + 2) {
        printf("%d\n", i);
    }
    return 0;
}