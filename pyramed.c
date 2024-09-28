// This program print the pyramed structure
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;
    char ch;
    n =5 ;
    for ( i = 1; i <=n; i++)
    {
        for ( j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    for ( i = 1; i <=n; i++)
    {
        for ( j=1; j<=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
        
    }
    for ( i = 1; i <=n; i++)
    {
        for ( j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
     for ( i = 1; i <=n; i++)
    { ch = 'A';
        for ( j=1; j<=i; j++)
        {  
            printf("%c",ch);
            ch++;
        }
        printf("\n");
        
    }
    for ( i = n; i >=1; i--)
    {
        for ( j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    for ( i = n; i >=1; i--)
    {
        for ( j=1; j<=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
        
    }
    for ( i = n; i >=1; i--)
    {
        for ( j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
     for ( i = n; i >=1; i--)
    { ch='A';
        for ( j=1; j<=i; j++)
        {  
            printf("%c",ch);
             ch++;
        }
        printf("\n");
      
    }
    
    return 0;
}
