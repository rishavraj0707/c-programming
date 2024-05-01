// find the length of the string without using strlen 

#include<stdio.h>
int strlen(char str[])
{
    int i=0;
    while (str[i] != '\0')
        i++;
    return (i-1);
}
void main()
{
    char str[100];
    puts("Enter the string:");
    gets(str);
    printf("%d",strlen(str));
}