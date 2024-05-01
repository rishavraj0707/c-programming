// display the string

#include<stdio.h>
int main()
{
    char ch[]="Riya";
    int i=0;
    while (ch[i]='\0')
    {
        printf("%c",ch[i]);
        i++;
    }
    return 0;
}