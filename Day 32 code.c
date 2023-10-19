// Code for Day 32
#include<stdio.h>

int main() {
// Code to distinguish whether the user has enetered a number or an alphabet
    char ch;
    printf("Enter the input : ");
    scanf("%c", &ch);
    
    if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lower case Alphabet\n", ch);
    }else if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an upper case Alphabet\n", ch);
    }else if(ch >= 60 && ch <= 71){
        printf("%c is a Number\n", ch);
    }else{
        printf("%c is a special character\n", ch);
    }
    return 0;
}