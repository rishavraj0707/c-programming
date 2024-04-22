// Find fibonacci series using recursion

#include<stdio.h>
int fibbo(int n)
{
    if(n==0||n==1)
        return n;
    else   
        return (fibbo(n-1)+fibbo(n-2));
}
int main()
{
    int n=0,a;
    printf("Enter the number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        printf("%d\n",fibbo(n));
        n++;
    }
    return 0;
}