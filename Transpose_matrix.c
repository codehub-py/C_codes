//This program print matrix in transpose formate(Convert row into column & column into row)
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[50][50],m,n,r,c;
    printf("Print Matrix and Transpose Matrix");
    printf("\nEnter matrix size = ");
    scanf("%d\n%d",&m,&n);
    printf("\nEnter values in matrix\n");
    for (r = 0; r < m; r++)
    {
        for ( c = 0; c < n; c++)
        {
            scanf("%d",&a[r][c]);
        }
        
    }
    printf("\nIn matrix format\n");
    for ( r = 0; r < m; r++)
    {
        for ( c = 0; c < n; c++)
        {
            printf("%5d",a[r][c]);
        }
        printf("\n");
    }

    printf("\nIn Transpose format\n");
    for ( r = 0; r < m; r++)
    {
        for ( c = 0; c < n; c++)
        {
            printf("%5d",a[c][r]);
        }
        printf("\n");
    }
    
    return 0;
}