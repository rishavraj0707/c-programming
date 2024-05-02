// Append one string to at the end of another string

#include<stdio.h>
#include<string.h>
int main()
{
    char source[]="Man",target[20]="Iron";
    strcat(target,source);
    printf("source string=%s\n",source);
    printf("target source=%s\n",target);
    return 0;
}