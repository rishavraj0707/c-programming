// division of the student

#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5;
    float per;
    printf("enter the marks of five subject:");
    scanf("%d %d %d %d %d" ,&s1,&s2,&s3,&s4,&s5);
    per=(s1+s2+s3+s4+s5)/5.0;

    if(per>=60)
        printf("1st division");
        else
            if(per>=50)
            printf("2nd division");
                else
                    if(per>=40)
                printf("3rd division");
                        else
                printf("fail!");
    return 0;

}