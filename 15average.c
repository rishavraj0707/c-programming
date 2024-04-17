// average of 1st 20 natural number

#include<stdio.h>
int main(){
    int sum=0,i;
    float avg;

    for(i=1;i<=20;i++)
        sum=sum+i;
        avg=sum/20.0;
        printf("Average=%f",avg);
    return 0;
}