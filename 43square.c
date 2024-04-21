// square of a number using function

#include<stdio.h>
float square(float x)
{
    float y;
    y=x*x;
    return (y);
}
int main()
{
    float a,b;
    printf("Enter any number:");
    scanf("%f",&a);
    b=square(a);
    printf("Square of %f is %f\n",a,b);
    return 0; 
}