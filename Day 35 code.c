// Code for Day 35
#include<stdio.h>

int main() {
// Code to find the number of digits in a number entered by User
    int i, num;
    i = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    
    while(num > 0){
        num = num / 10;
        i++;
    }
    printf("Number of digits are %d", i);
    
    return 0;
}