// Code for Day 28
#include<stdio.h>

int main() {
// Code to tell whether the entered alphabet is vowel or consonant
    char ch;
    printf("Enter the Alphabet : ");
    scanf("%c", &ch);
    
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a'  || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a Vowel\n", ch);
    }else {
        printf("%c is a Consonant", ch);
    }
    return 0;
}