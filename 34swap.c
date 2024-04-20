// swapping of two number using third variable

#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the numbers a and b :");
    scanf("%d %d",&a , &b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d b=%d",a,b);
    return 0;

}