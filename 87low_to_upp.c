// lower case to upper case

#include<stdio.h>
int main()
{
    char str[20];
    int i;
    puts("Enter the string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;

    printf("upper case string:%s",str);
    return 0;
}