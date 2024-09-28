//This program prints digonal matrix ,Lower triangle & Upper triangle
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a [50][50],m,n,r,c;
    printf("Print matrix in following forms\n");
    printf("Digonal matrix\nLower triangle\nUpper triangle ");
    printf("\nEnter matrix size = ");
    scanf("%d\n%d",&m,&n);
    printf("Enter values in matrix\n");
    for ( r = 0; r < m; r++)
    {
        for ( c = 0; c < n; c++)
        {
            scanf("%d",&a[r][c]);
        }
        
    }
    printf("\n\nMatrix formate\n");
    for ( r = 0; r < m; r++)
    {
        for ( c = 0; c < n; c++)
        {
            printf("%5d",a[r][c]);
        }
      printf("\n");
    }
    if (m!=n)
    {
        printf("Invalid matrix type");
    }
    else
    {
        printf("\nDigonal Formate\n");
        for ( r = 0; r < m; r++)
       {
            for ( c = 0; c < n; c++)
            {
             if (r==c)
             {
                printf("%5d",a[r][c]);
             }
            }
         printf("\n");
       }
       
       printf("\nLower triangle Formate\n");
        for ( r = 0; r < m; r++)
       {
            for ( c = 0; c < n; c++)
            {
             if (r>=c)
             {
                printf("%5d",a[r][c]);
             }
            }
         printf("\n");
       }

       printf("\nUpper triangle Formate\n");
        for ( r = 0; r < m; r++)
       {
            for ( c = 0; c < n; c++)
            {
             if (r<=c)
             {
                printf("%5d",a[r][c]);
             }
            }
         printf("\n");
       }
    }
    return 0;
}
