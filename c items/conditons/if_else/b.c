//  `if-else` (Medium):** Write a C program that reads an integer and prints `"Within range"` if it is between **10 and 50 inclusive**; otherwise, print `"Out of range"`. Use `if-else`.
#include<stdio.h>
int main(){
    int x;
    scanf("%d" , &x);
    if(x>=10 && x<=50){
        printf(" within a range ");

    }
    else{
        printf("out of range");
    }
    }