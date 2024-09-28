// This program check whether number is prime or not 
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n,i=2,f=0;
    printf("---Check Prime Number---");
    printf("\nEnter Number = ");
    scanf("%d",&n);
    while (i<=n-1)
    {
        if (n%i==0)
        {
            f = 1;
        break;
        }
         i++;
        
    }
    
    if (f == 0)
    {
        printf("Number is Prime");
    }
    else{
        printf("Number is Not Prime");
    }
    return 0;
}
