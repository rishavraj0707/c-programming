// bubble sort using function!

#include<stdio.h>
int insertionSort(int a[] , int n);
void main(){
    int a[100],i,j,n;
    printf("enter n =");
    scanf("%d",&n);
    printf("enter the element of the array:");
    for ( i = 0; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    insertionSort(a , n);
    printf("sorted array is:");
    for ( j = 0; j < n ; j++)
    {
        printf("%d\n",a[j]);
    }
}
int insertionSort(int a[100] , int n)
{
    int i,j,temp;
    for( i=0 ; i<n ; i++ )
    {
        for( j=0 ; j<n-1 ; j++ )
        {
            if( a[j] > a[j+1] )
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}