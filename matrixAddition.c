#include<stdio.h>
// addition of two matrix of same dimension
int main()
{
    int first[20][20], second[20][20], sum[20][20], i,j,m,n,a;
    printf("Enter the no. of Rows and Columns: \n");
    scanf("%d%d",&m,&n);
    printf("Enter the first matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&first[i][j]);
        }
    }
    printf("Enter the Second matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&second[i][j]);
        }
    }
    printf("Sum of matrix is: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j] = first[i][j] + second[i][j];
            printf("%d  ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
