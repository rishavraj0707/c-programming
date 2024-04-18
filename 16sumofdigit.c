// sum of indivisual digit of 5 digit number

#include<stdio.h>
int main()
{
    int i,n,rem,sum=0;
    printf("Enter the five digit number:");
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    printf("sum=%d",sum);
    return 0;
}