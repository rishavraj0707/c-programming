// Bubble sort using loop

#include<stdio.h>
int main()
{
    int i,j,n,temp;
    printf("Enter the no. of element\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }   
    return 0;
}