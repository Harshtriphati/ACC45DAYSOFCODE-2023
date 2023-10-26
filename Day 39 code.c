// Code for Day 39
#include<stdio.h>

int main() {
// Code to print all the tables of numbers form 1 to 10
    for(int i = 1; i <= 10; i++) {
        for(int j = 1; j <= 10; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    return 0;
}