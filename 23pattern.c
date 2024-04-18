/* print the pattern
    ****
    ****
    ****
    ****        */

#include<stdio.h>
int main()
{
    int r,c;
    for(r=1;r<=4;r++)
    {
        for(c=1;c<=4;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}