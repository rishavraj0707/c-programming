// selection sort usig loop

#include<stdio.h>
int main()
{
    int i,j,n,temp,a[20];
    printf("n=");
    scanf("%d",&n);
    printf("Enter the element to be sorted");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("output:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    
    return 0;
}
