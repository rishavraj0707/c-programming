// largest number among three number

#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the three number:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("a is largest number!");
        else
        printf("c is largest number!");
    }
    else
    {
        if(b>c)
        printf("b is largest number!");
        else
        printf("c is largest number!");
    }
}