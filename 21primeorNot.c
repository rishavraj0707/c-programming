// Number is prime and not 

#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter the number=");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            count++;
        if(count=2)
            break;
    }
    if(count=1)
        printf("Prime number!");
    else
    printf("not prime!");
    return 0;
}