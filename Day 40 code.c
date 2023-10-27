// Code for Day 40
#include<stdio.h>

int main() {
// Code to find the single digit sum of a number entered by User
    int r, num, sum;
    printf("Enter the number : ");
    scanf("%d", &num);
    
    do {
        sum = 0;
        while(num != 0) {
            r = num % 10;
            num = num / 10;
            sum = sum + r;
        }if(sum > 9) {
            num = sum;
        }
    }while(num > 9);
    
    printf("%d\n", sum);
}