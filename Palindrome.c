//This program is for checking whether the number is palindrome
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n,r,s=0,m;
    printf("--Palindrome number checking--");
    printf("\nEnter Number = ");
    scanf("%d",&n);
    m=n;
    while (n!=0)
    {
        r = n%10;
        s = s*10+r;
        n = n/10;
    }
    if (m==s)
    {
        printf("The numder %d is palindrome",m);
    }
    else
    {
        printf("The numder %d is non-palindrome",m);
    }
    
    return 0;
}