#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b;

    printf("Enter value of a =");
    scanf("%d",&a);

    printf("Enter value of b =");
    scanf("%d",&b);

    printf("Before valu of a is %d and b is %d",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nAfter valu of a is %d and b is %d",a,b);

    return 0;
}
