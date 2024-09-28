// This program is check that number is armstrong or not
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
     int n,r,s=0,m;
    printf("--Armstrong number checking--");
    printf("\nEnter Number = ");
    scanf("%d",&n);
    m=n;
    while (n!=0)
    {
        r = n%10;
        s = s+(r*r*r);
        n = n/10;
    }
    if (m==s)
    {
        printf("The numder %d is Armstrong",m);
    }
    else
    {
        printf("The numder %d is Non-Armstrong",m);
    }
    return 0;
}
