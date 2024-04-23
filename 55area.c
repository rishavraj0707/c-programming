// Macros with argument . Find the area of the circle 

#include<stdio.h>
#define AREA(x) (3.14*x*x)
int main()
{
    float r1=6.25,r2=2.5,a;
    a=AREA(r1);
    printf("Area of the circle=%f\n",a);
    a=AREA(r2);
    printf("Area of the circle=%f",a);
    return 0;
}