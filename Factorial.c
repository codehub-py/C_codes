//This program give factorial of any number
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n,m;
    long int f=1;
    printf("---Find factorial of number---");
    printf("\nEnter the numder = ");
    scanf("%d",&n);
    m=n;
    while (n!=0)
    {
        f*=n;
        n--;
    }
    printf("\nThe factorial of %d is %ld",m,f);
    

    return 0;
}
