// write a menu driven program which has (i) factorial of a number (II) prime or not (III) odd or even (IV) exit

#include<stdio.h>
// #include<stdlib.h>
int main()
{
    int choice,num,i,fact;
    while(1)
    {
        printf("\n1.Factorial\n");
        printf("\n2.Prime\n");
        printf("\n3.Odd/Even\n");
        printf("\n4.Exit\n"); 
        printf("Your Choice?");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter number:");
                scanf("%d",&num);
                fact=1;
                for(i=1;i<=num;i++)
                    fact=fact*i;
                printf("Factorial value=%d\n",fact);
                break;
            
            case 2:
                printf("\nEnter number:");
                scanf("%d",&num);
                for(i=2;i<=num;i++)
                {
                    if(num%i==0)
                    {
                        printf("Not a prime number:");
                        break;
                    }
                }
                if(i==num)
                    printf("Prime Number");
                break;

            case 3:
                printf("\nEnter number");
                scanf("%d",&num);
                if(num%2==0)
                    printf("Even Number");
                else
                    printf("Odd number");
                break;

            case 4:
                exit(0);
                printf("exit!");
            
            default:
                printf("Wrong choice");
        }      
    }
}