// reverse of the string

#include<stdio.h>
#include<string.h>
void xstrrev(char *s);
void main()
{
    char s[100];
    puts("Enter the string:");
    gets(s);
    strrev(s);
    puts(s);
}
void xstrrev(char *s)
{
    int i=0;
    int length=strlen(s);
    for(i=0;i<length/2;i++)
    {
        char temp=s[i];
        s[i]=s[length-i-1];
        s[length-i-1]=temp;
    }
}