// find number is even or odd

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    if(n%2==0)
        printf("NUmber is Even!");

    else
        printf("Number is Odd!");
    return 0;
}