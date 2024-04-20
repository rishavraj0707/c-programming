// check even and odd using goto statement

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if(n%2==0)
        goto even;
    else
        goto odd;

    even :
    printf("Number is even");
    return 0;
    odd:
    printf("Number is odd");
    return 0;
}