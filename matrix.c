// This program print enter valu in matrix formate using 2d arrya concept
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[3][3],r,c;
    printf("Print data in matrix formate\n");
    for ( r = 0; r < 3; r++)
    {
        for ( c = 0; c < 3; c++)
        {
            scanf("%d",&a[r][c]);
        }
        
    }
    printf("In matrix format\n");
    for ( r = 0; r < 3; r++)
    {
        for ( c = 0; c < 3; c++)
        {
            printf("%5d",a[r][c]);
        }
        printf("\n");
    }
    
    return 0;
}
