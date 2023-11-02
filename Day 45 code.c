// Code for Day 45
#include<stdio.h>

int main() {
// Code for sorting of an Array
    int i, j, t;
    int a[] = {4, 23, 19, 6, 9, 12, 56, 89, 37};
    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 9; j++) {
            if( a[i] > a[j] ) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("The sorted Array is :\n");
    for(i = 0; i < 9; i++) {
        printf("%d  ", a[i]);
    }
    
    return 0;
}