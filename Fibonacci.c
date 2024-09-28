// This program print fibonacci number serise 
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c,n,i=1;
    printf("--Print Fibonacci serise Number--");
    printf("\nEnter the Limit = ");
    scanf("%d",&n);
    a=0;
    b=1;
    if (n==1)
    {
        printf("%d",a);
    }
    else if (n==2)
    {
        printf("%d , %d",a,b);
    }
    else if (n > 2)
    {
        printf("%d , %d",a,b);
        while (i<=(n-2))
        {
            c = a+b;
            printf(" , %d",c);
            a=b;
            b=c;
            i++;
        }
        
    }
    
    return 0;
}
