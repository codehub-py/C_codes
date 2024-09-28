//This cod convert Binary to Decimal

#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{   int n,r,b=1,d=0,bin;
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
    return 0;
}
