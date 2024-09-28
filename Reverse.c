//This program is for reversing the number
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n,r,s=0,m;
    printf("--Reverse The Number--");
    printf("\nEnter Number = ");
    scanf("%d",&n);
    m=n;
    while (n!=0)
    {
        r = n%10;
        s = s*10+r;
        n = n/10;
    }
    printf("The reverse of %d is %d",m,s);
    return 0;
}