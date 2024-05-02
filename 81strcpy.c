// copy the string using string.h header file 

#include<stdio.h>
#include<string.h>
int main()
{
    char source[]="Iron man",target[20];
    strcpy(target,source);
    printf("source string=%s\n",source);
    printf("target string=%s",target);
    return 0;
}