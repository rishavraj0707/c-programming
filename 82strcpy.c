// copy the string by make a new function 

#include<stdio.h>
void xstrcpy(char *t ,char *s )
{
    while(*s!='\0')
    {
        *t=*s;
        s++;
        t++;
    }
}
int main()
{
    char source[]="iron man",target[20];
    xstrcpy(target,source);
    printf("source string=%s\n",source);
    printf("target string=%s\n",target);
    return 0;
}