// sum of one dimensional array    ||  a={1,2,3,4,5} = 15  ||

#include<stdio.h>
int main(){
    int  arr[100],size,i,sum=0;
    printf("Enter array size:\n");
    scanf("%d",&size);
    printf("Enter array element");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
        sum=sum+arr[i];

    printf("sum of the array =%d\n",sum);

    return 0;
}