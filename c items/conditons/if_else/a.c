// `if-else` (Easy):** Write a C program that reads an integer and prints `"Even"` if it’s divisible by 2; otherwise, print `"Odd"`. Send your code.
#include<stdio.h>
int main(){
    int x;
    scanf("%d" , &x);
        if(x%2==0){
        printf("even");

    }
    else {
        printf("odd");

    }
}