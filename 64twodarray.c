// Two dimensional array

#include<stdio.h>
int main()
{
    int stud[4][2];
    int i,j;
    for(i=0;i<=3;i++)
    {
        printf("Enter roll number and marks : ");
        scanf("%d %d", &stud[i][0] , &stud[i][1] );
    }
    printf("Following roll number and marks is :");
    for(i=0;i<=3;i++)
        printf("\n%d %d\n",stud[i][0] , stud[i][1]);
    return 0;
}