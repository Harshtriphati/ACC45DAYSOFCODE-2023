// Code for Day 14
#include<stdio.h>

int main() {
// Code for printing all the numbers from 1 to 10 except for 7
    for (int i = 1; i <= 10; i++) {
        if(i == 7) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}