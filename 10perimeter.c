// perimeter of triangle

#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,p,s,ar;
    printf("enter the three size:");
    scanf("%f %f %f",&a,&b,&c);
    p=a+b+c;
    s=p/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The primeter of triangle is %f\n",p);
    printf("The area of the triangle is %f",ar);
}