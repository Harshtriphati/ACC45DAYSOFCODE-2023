// Code for Day 38
#include<stdio.h>

int main() {
// Code to print Prime numbers 
    int n;// Till where user want to print Prime numbers
    int i, j, d = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                d++;
                break;
            }
        }if(d == 0 && i != 1) {
            printf("%d\n", i);
        } d = 0;
    }
    return 0;
}