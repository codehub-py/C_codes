//This cod convert Binary to Octa

#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{   int n,r,b=1,d=0,bin,i=0,ar[50];
    printf("Enter Binary Number = ");
    scanf("%d",&n);
    bin=n;
    while (n!=0)
    {
        r=n%10;
        d=d+r*b;
        b=b*2;
        n=n/10;
    }
    printf("Binury number = %d",bin);
    printf("\nDecimal number = %d",d);
    while (d!=0)
    {
        r = d%8;
        ar[i]=r;
        i++;
        d=d/8;
    }
    i--;
    printf("\nOcta number = ");
    while (i>=0)
    {
        printf("%d",ar[i]);
        i--;
    }
    
    return 0;
}