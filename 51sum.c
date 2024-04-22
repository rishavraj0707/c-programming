// sum of five digit number using recursion

#include<stdio.h>
int rsum(int);
int main()
{
    int num,n,sum;
    printf("Enter number:");
    scanf("%d",&num);
    sum=rsum(num);
    printf("Sum of digit is %d\n",sum);
    return 0;
}
int rsum(int n)
{
    int s,rem;
    if(n!=0)
    {
        rem=n%10;
        s=rem+rsum(n/10);
    }
    else
        return 0;
    return s;
}