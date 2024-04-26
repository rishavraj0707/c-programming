// insertion sort using function!

#include<stdio.h>
void insertionSort(int a[] , int n );
void main(){
    int a[50] , i , j , n ;
    printf("enter n=");
    scanf("%d" , &n );
    printf("enter the element of array:");
    for( i=0 ; i<n ; i++ )
    {
        scanf("%d" , &a[i]);
    }
    insertionSort( a , n );
    printf("soorted array:");
    for ( j=0 ; j<n ; j++ )
    {
        printf("%d\n" , a[j] );
    }
}
void insertionSort(int a[]  , int n)
{
    int i , j , temp ;
    for(i=1 ; i<n ; i++ )
    {
        for(j=i ; j>0 ; j--)
        {
            if( a[j] < a[j-1] )
            {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
}