// find the sum of the matrix

#include<stdio.h>
int main()
{
    int r,c,a[100][100],b[100][100],sum[100][100],i,j;
    printf("Enter the number of rows between 1 and 100:\n");
    scanf("%d",&r);
    printf("Enter the number of column between 1 and 100:\n");
    scanf("%d",&c);

    printf("Enter element of 1st matrix:\n");
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j)
        {
            printf("Enter element a: %d %d :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter element of 2nd matrix:\n");
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j)
        {
            printf("Enter element b %d %d :",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    // adding two matrices
    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
            sum[i][j]=a[i][j]+b[i][j];

    // printing the result 
    printf("\nSum of two matries:\n");
    for(i=0;i<c;++i)
    {
        for(j=0;j<c;++j)
        {
            printf("%d\t",sum[i][j]);
            if(j==c-1)
            {
                printf("\n\n");
            }
        }
    }
    return 0;
}