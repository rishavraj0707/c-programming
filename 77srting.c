// display the string using pointer

#include<stdio.h>
int main()
{
    char name[]="Rishav";
    char *ptr;
    ptr=name;
    while (*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}