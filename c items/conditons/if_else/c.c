// if-else (Hard): Write a C program that reads an integer and uses if-else to check whether it is a three-digit number. Count negative numbers too: for example, -456 is three-digit. Print the input number along with the result.
#include<stdio.h>
int main(){
    int x;
    scanf("%d" , &x);
    if(x>99 && x<=999 || x<-99 && x>=-999){
        printf("%d is three digit " , x);
    }
    else{
        printf("%d is not three digit" ,x);
        return 0;
    }
    return 0;
}