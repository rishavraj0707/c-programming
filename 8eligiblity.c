// eligiblity of voter

#include<stdio.h>
int main(){
    int n;
    printf("Enter the age");
    scanf("%d",&n);
    if(n>-18)
        printf("eligible of voter!");
    else
        printf("not eligible!");
}