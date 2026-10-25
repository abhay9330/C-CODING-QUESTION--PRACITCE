//  — if only (Easy): Write a C program that reads an integer and prints "Positive" only if the number is greater than 0. Use a plain if statement; don’t use else.
#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
   if(x>0){
    printf("Positive");
    return 0;
   }}