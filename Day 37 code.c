// Code for Day 37
#include<stdio.h>

int main() {
// Code to check whether the number is a palindrome or not
    int i, d, num, pallen;
    printf("Enter the number : ");
    scanf("%d", &num);
    i = num;
    pallen = 0;
    
    while(num > 0) {
        d = num % 10;
        pallen = pallen * 10 + d;
        num = num / 10;
    }
    if(pallen == i){
        printf("Entered number is a palindrome\n", num);
    }else {
        printf("Entered number is not a palindrome\n", num);
    }
    return 0;
}