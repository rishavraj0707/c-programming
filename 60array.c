// accessing  array element using pointer

#include<stdio.h>
int main()
{
    int num[]={1,2,3,4,5,6};
    int i,*ptr;
    ptr= &num[0];
    for(i=0;i<=5;i++)
    {
        printf("Address = %p Element =%d\n",ptr,*ptr);
        ptr++;
    }
    return 0;
}