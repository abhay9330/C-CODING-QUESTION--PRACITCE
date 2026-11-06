// Write a C program using `if-else-if` to read an integer and print whether it is positive, negative, or zero. Include the input number in the output
#include<stdio.h>
int main(){
    int x;
    scanf("%d" , &x);
    if (x>0){
    printf(" positive");
}
else{
    if(x==0){
    printf("zero");
}}
if (x<0){
    printf("negative");

}
return 0;
}

// second way 
// #include<stdio.h>
// int main(){
//     int x;
//     scanf("%d" , &x);
//     if (x>0){
//     printf(" positive");
// }
// else 
// if(x==0){
//     printf("zero");
// }
// else {
//     printf("negative");

// }
// return 0;
// }

