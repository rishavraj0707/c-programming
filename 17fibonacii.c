// write a program to print fibbonacii series

#include<stdio.h>
void main(){
    int n,t1=0,t2=1,t3,i;
    printf("Enter the number n=");
    scanf("%d",&n);
    if(n>=1)
        printf("%d",t1);
    if(n>=2)
        printf("%d",t2);

    for(i=3;i<=n;i++)
    {
        t3=t1+t2;
        printf("%d",t3);
        t1=t2;
        t2=t3;
    }
}