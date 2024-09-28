#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int r ,c ;
    printf("Enter the radius = ");
    scanf("%d" ,&r);
    c= M_PI * r *r;
    printf("Area of circule = %d",c );
    c= 2*M_PI * r ;
    printf("\nCircumfurence of circule = %d",c );

    return 0;
}
