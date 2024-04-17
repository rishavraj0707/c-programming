// average of ten number using for loop

#include<stdio.h>
int main(){
    int n,sum=0,i;
    float avg;
    printf("Enter the number:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n);
        sum=sum+n;
    }
    avg=sum/10.0;
    printf("Average:%f",avg);
    return 0;
}