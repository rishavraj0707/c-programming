// swaping of two number using function

#include<stdio.h>
void swap(int a, int b);
int main()
{
    int a,b;
    printf("Enter the number a and b :");
    scanf("%d %d",&a,&b);
    swap(a,b);
    return 0;
}
void swap(int a, int b)
{
    int temp;
    temp=b;
    b=a;
    a=temp;
    printf("a=%d and b=%d",a ,b);
}