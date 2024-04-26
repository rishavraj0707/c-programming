// Linear search 

#include<stdio.h>
int main()
{
    int a[10],n,i,j,count=0;
    printf("enter the number to search:");
    scanf("%d",&n);
    printf("enter the element of array:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<10;j++){
        if (n==a[j])
        count++;
        if (count==1)
        break;
    }
    if(count==1)
    printf("number is present");
    else
    printf("number is  not present");
    return 0;
}