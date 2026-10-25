// find the facotorial of the number 
#include<stdio.h>
int main(){
    int x;
    int num=1;
    scanf("%d", &x);
    for( int i=1; i<=x ; i++){
        num=num*i;
    }
    printf(" the factorial of the number is :%d", num);
    
}
