// upper case to lower case

#include<stdio.h>
int main()
{
    char str[20];
    int i;
    puts("Enter the string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;

    printf("lower case string:%s",str);
    return 0;
}