// Code for Day 13
#include<stdio.h>

int main() {
// Code for keep taking input untill User enters an odd number
    int n;
    do{
        printf("Enter the number : ");
        scanf("%d", &n);
        printf("%d\n", n);
    
        if(n % 2 != 0){
            break;
        }
    }while (1);
    printf("You have entered an odd number\n");
    
    return 0;
}