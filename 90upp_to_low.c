// lower case to upper case 

#include<stdio.h>
void strupr(char *s);
int main()
{
    char s[100];
    puts("Enter the string:");
    gets(s);
    strupr(s);
    puts(s);
}
void strupr(char *s)
{
    while(*s!='\0')
    {
        if(*s>='a' && *s<='z')
        {
            *s=*s-32;
        }  
        s++;
    }  
}