// print first n natural number using goto

#include<stdio.h>
int main(){
    int n ,i=1;
    printf("Enter the number:");
    scanf("%d",&n);
    printnum:
    printf("%d",i);
    i++;
    if(i<=n)
        goto printnum;
    return 0;
}