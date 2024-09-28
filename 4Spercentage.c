#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c,d;
    printf("Enter marks of Maths = ");
    scanf("%d",&a);
    printf("\nEnter marks of Science = ");
    scanf("%d",&b);
    printf("\nEnter marks of Marathi = ");
    scanf("%d",&c);
    printf("\nEnter marks of English = ");
    scanf("%d",&d);
    printf("Total percentage is = %d",((a+b+c+d)*100/400));
    return 0;
}
