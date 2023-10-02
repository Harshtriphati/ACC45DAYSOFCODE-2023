// Code for Day 15
#include<stdio.h>

int main() {
// Code to find if the letter entered by user is Upper case or Lower case
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);
    
    if (ch >= 'A' && ch <= 'Z') {
        printf("You have entered an Uppper case Letter\n");
    }else if (ch >= 'a' && ch <= 'z') {
        printf("You have entered a Lower case Letter\n");
    }else {
        printf("Not a English Character\n");
    }
    return 0;
}