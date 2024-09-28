//This program is for addition of individual number
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n,r,s=0;
    printf("--Addition of Individual Number--");
    printf("\nEnter Number = ");
    scanf("%d",&n);
    while (n!=0)
    {
        r = n%10;
        s = s+r;
        n = n/10;
    }
    printf("Answer = %d",s);
    return 0;
}
