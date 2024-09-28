//This program print multiplication of 2 matrix
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a [50][50],b[50][50],result[50][50],m,n,r,c,k;
    printf("Multiplication of matrix\n");
    printf("\nEnter first matrix size = ");
    scanf("%d\n%d",&m,&n);
    printf("Enter values in First  matrix\n");
    for ( r = 0; r < m; r++)
    {
        for ( c = 0; c < n; c++)
        {
            scanf("%d",&a[r][c]);
        }
        
    }

    printf("\nEnter second matrix size = ");
    scanf("%d\n%d",&m,&n);
    printf("Enter values in second  matrix\n");
    for ( r = 0; r < m; r++)
    {
        for ( c = 0; c < n; c++)
        {
            scanf("%d",&b[r][c]);
        }
        
    }

    for ( r = 0; r < m; r++)
    {
        for ( c = 0; c < n; c++)
        {
            result[r][c]=0;
        }
        
    }


    printf("\n\nMatrix formate\n");
    printf("First matrix\n");
    for ( r = 0; r < m; r++)
    {
        for ( c = 0; c < n; c++)
        {
            printf("%5d",a[r][c]);
        }
      printf("\n");
    }

    printf("\nSecond matrix\n");
    for ( r = 0; r < m; r++)
    {
        for ( c = 0; c < n; c++)
        {
            printf("%5d",b[r][c]);
        }
      printf("\n");
    }

    for ( r = 0; r < m; r++)
    {
        for ( c = 0; c < n; c++)
        { 
            for ( k = 0; k < m; k++)
            {
                result[r][c]=result[r][c]+(a[r][k]*b[k][c]);
            }
            
           
        }
      printf("\n");
    }
    
    printf("\nMultiplication of matrix\n");
    for ( r = 0; r < m; r++)
    {
        for ( c = 0; c < n; c++)
        {
            printf("%5d",result[r][c]);
        }
      printf("\n");
    }
    return 0;
}