// Code for Day 4
#include<stdio.h>

int main() {
// Code for printing the table of a number entered by user
    int num, i;
    printf("Enter number whose table you want : ");
    scanf("%d", &num);
    for(i = 1; i <= 10; i++) {
        printf("%d\n", num * i);
    }
    return 0;
}