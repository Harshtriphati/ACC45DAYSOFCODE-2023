// Code for Day 33
#include<stdio.h>

int main() {
// Code to convert an Upper case alphabet into lower case and vise versa.
    char ch;
    printf("Enter the alphabet : ");
    ch = getchar();
    
    if(isupper(ch)) {
        putchar(tolower(ch));
    }else if(islower(ch)) {
        putchar(toupper(ch));
    }else {
        printf("Not an english alphabet\n");
    }
    return 0;
}