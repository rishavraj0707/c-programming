// sum of 1-d array

#include<stdio.h>
int main()
{
    int a[5],b[5],c[5];
    int i,j,k;
    printf("Enter the element in the array a:");
    for(i=0;i<5;i++)
        scanf("%d\n",&a[i]);
    printf("Enter the element in the array b:");
    for(j=0;j<5;j++)
        scanf("%d\n",&a[j]);
    if(i==j)
    {
        for(k=0;k<5;k++)
            c[k]=a[k]+b[k];
        printf("Element of the c is %d\n",c[k]);
    }
    else   
        printf("Addition will not performed!");
    return 0;
}