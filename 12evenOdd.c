// find number is odd or even using turnary operator

#include<stdio.h>
int main(){
    int a;
    printf("enter number to find even or odd:");
    scanf("%d",&a);
    (a%2==0)?
    printf("Even number") : printf("Odd number");
    return 0;
}