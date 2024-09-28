#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a ,*p;
    a =20;
    p = a;
    printf("Valu = %d",a);
    printf("\nAddress = %u",&a);
    printf("Valu = %d",p);
    printf("\nAddress = %u",*p);
    return 0;
}
