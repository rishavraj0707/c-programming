#include<stdio.h>
int main(){
    int p,r,t;
    printf("enter the principle:");
    scanf("%d",&p);
    printf("enter the rate:");
    scanf("%d",&r);
    printf("enter the time:");
    scanf("%d",&t);
    float si=(p*r*t)/100;
    printf("simple intrest=%f",si);
    return 0;
}