// first function program 

#include<stdio.h>
void italy();         // Function declaration 
void brazil();       // Function declaration 
void argentina();   // Function declaration 
int main()
{
    printf("I am in main\n");
    italy();          // Function calling 
    brazil();        // Function calling 
    argentina();    // Function calling 
    return 0;
}
void italy()  // Function defination 
{
    printf("I am in italy\n");
}
void brazil()  // Function defination 
{
    printf("I am in brazil\n");
}
void argentina() // Function defination 
{
    printf("I am in argentina\n");
}