// Code for Day 12
#include<stdio.h>

int main() {
// Code Using && logical operator 
// User will go on a walk if it's Sunday and it's Snowing
    int its_sunday = 1;
    int its_snowing = 1;
    int a;
    a = its_sunday && its_snowing;
    
    if (a == 1) {
        printf("You should go for a walk\n");
    }else {
        printf("You shouldn't go for a walk\n");
    }
    return 0;
}