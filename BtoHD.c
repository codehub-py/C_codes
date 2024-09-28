//This cod convert Binary to HexaDecimal

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
        r = d%16;
        ar[i]=r;
        i++;
        d=d/16;
    }
    i--;
    printf("\nHexaDecimal number = ");
    while (i>=0)
    {
        switch (ar[i])
        {
        case(10):printf("A");
            break;
        case(11):printf("B");
            break;
        case(12):printf("C");
            break;    
        case(13):printf("D");
            break;
        case(14):printf("E");
            break;
        case(15):printf("F");
            break;
        default:printf("%d",ar[i]);
            break;
        }
        i--;
    }
    
    return 0;
}
