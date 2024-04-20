// swapping of two number without using third variable

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the numbers a and b :");
    scanf("%d %d",&a , &b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("a=%d b=%d",a,b);
    return 0;
}