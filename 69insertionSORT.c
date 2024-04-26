// Insertion sort using loop

#include<stdio.h>
int main()
{
    int i,j,n,temp,a[20];
    printf("enter no. of elements : ");
    scanf("%d",&n);
    printf("enter the element of arrays : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=i;j>0;j--)
    {
        if(a[j]<a[j-1])
        {
            temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
        }
    }
}
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}