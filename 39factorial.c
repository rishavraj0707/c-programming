//find factorial of a number using function

#include<stdio.h>
int fact(int);
int main(){
    int num,factorial;
    printf("Enter a number=");
    scanf("%d",&num);
    factorial=fact(num);
    printf("factorial of %d =%d",num,factorial);
    return 0;
}
int fact(int num)
{
    int factorial=1;
    for( int i=1;i<=num;i++)
    {
        factorial=factorial * i;
    }
    return (factorial);
}