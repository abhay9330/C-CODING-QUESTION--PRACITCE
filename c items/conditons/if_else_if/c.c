// Write a C program using `if-else-if` to read marks from 0 to 100 and print the grade: A for 90–100, B for 80–89, C for 70–79, D for 60–69, and Fail below 60. If the marks are outside 0–100, print `"Invalid marks"`. Include the marks in the output.
#include<stdio.h>
int main(){
    int x;
    scanf("%d" , &x);
    if ( x>=90 && x<=100){
        printf(" %d grade A " , x);
    }
else if (x>=80 && x<=89)
{
        printf(" %d grade b " , x);
    
}
else if (x>=70 && x<=79)
{
        printf(" %d grade c " , x);

}
else if (x>=60 && x<=69){
        printf(" %d grade d ", x);
}
else{
    printf("%d fail" , x);
}
return 0;
}