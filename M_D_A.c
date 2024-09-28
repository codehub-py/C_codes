// This is the program of Menu Driven Application

#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,n,r,M,H,E,S,SS,Ma,choise,ar[50],i=0,d,c,bin,T;
    float P;
    printf("------ Menu ------");
    printf("\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Area of circule");
    printf("\n6.Make 10th marks sheet\n7.Swap Valu\n8.Binary to Decimal\n9.Binary to Octa\n10.Binary to Hexadecimal");
    printf("\n----------------------------");
    printf("\nEnter your choise = ");
    cho : scanf("%d",&choise);
    switch (choise)
    {
    case 1 :{
    printf("Enter 2 values = ");
    scanf("%d\t%d",&a,&b);
    printf("Addition of %d and %d is = %d",a,b,a+b);
    }
        break;
    case 2 :{
    printf("Enter 2 values = ");
    scanf("%d\t%d",&a,&b);
    printf("Substraction of %d and %d is = %d",a,b,a-b);
    }
        break;
    case 3 :{
    printf("Enter 2 values = ");
    scanf("%d\t%d",&a,&b);
    printf("Multiplication of %d and %d is = %d",a,b,a*b);
    } 
        break;
    case 4 :{
    printf("Enter 2 values = ");
    scanf("%d\t%d",&a,&b);
    printf("Division of %d and %d is = %d",a,b,a/b);
    }
        break;
    case 5 :{
    printf("Enter the radius = ");
    scanf("%d" ,&r);
    c= M_PI * r *r;
    printf("Area of circule = %d",c );
    }
        break;
    
    case 6 : {
    Mar : printf("Enter marks of Marathi = ");
    scanf("%d",&M);
    if(M>100)
    {
     printf("You enter invalid marks please re-enter the marks\n");
        goto Mar ;
    }
    Hin : printf("Enter marks of Hindi = ");
    scanf("%d",&H);
    if(H>100)
    {
        printf("You enter invalid marks please re-enter the marks\n");
        goto Hin ;
    }
    Eng: printf("Enter marks of English = ");
    scanf("%d",&E);
    if(E>100)
    {
        printf("You enter invalid marks please re-enter the marks\n");
        goto Eng ;
    }
    Math : printf("Enter marks of Maths = ");
    scanf("%d",&Ma);
    if(Ma>100)
    {
        printf("You enter invalid marks please re-enter the marks\n");
        goto Math ;
    }
    Sci : printf("Enter marks of Science = ");
    scanf("%d",&S);
    if(S>100)
    {
        printf("You enter invalid marks please re-enter the marks\n");
        goto Sci ;
    }    
    Soc : printf("Enter marks of Social Science = ");
    scanf("%d",&SS);
    if(SS>100)
    {
        printf("You enter invalid marks please re-enter the marks\n");
        goto Soc ;
    }
    T = M + H + E + Ma + S + SS;
    P = T/6.0;
    printf("\n----------------------------------------------------------------------------");
    printf("\nsr.no\t\tsubjects\t\tMax.marks\tyour marks\t\t");
    printf("\n----------------------------------------------------------------------------");
    printf("\n  1\t\tMARATHI\t\t\t  100\t\t   %d",M);
    printf("\n  2\t\tHINDI\t\t\t  100\t\t   %d",H);
    printf("\n  3\t\tENGLISH\t\t\t  100\t\t   %d",E);
    printf("\n  4\t\tMATHMATICS\t\t  100\t\t   %d",Ma);
    printf("\n  5\t\tSCIENCE\t\t\t  100\t\t   %d",S);
    printf("\n  6\t\tSOCIAL SCIENCE\t\t  100\t\t   %d",SS);
    printf("\n\n----------------------------------------------------------------------------");
    printf("\n\t\t\t     Total marks  600\t\t   %d",T);
    printf("\n----------------------------------------------------------------------------");
    printf("\n\t\t\t     Percentage = %f %%",P);
    printf("\n----------------------------------------------------------------------------");
    if(P<35)
    {
        printf("\n\t  Your Fail 'Better luck' try next time");
    }
    else if (P>=35 && P<=50)
    {
        printf("\n\t  Your Pass in 'THIRD CLASS' Congratulations🎉 ");
    }
    else if(P>=50 && P<=60)
    {
        printf("\n\t  Your Pass in 'SECOND CLASS' Congratulations🎉 ");
    }
    else if(P>=60 && P<=75)
    {
        printf("\n\t  Your Pass in 'FIRST CLASS' Congratulations🎉 ");
    }
    else if(P>=75)
    {
        printf("\n\t  Your Pass in 'FIRST CLASS DIST.' Congratulations🎉 ");
    }
    printf("\n----------------------------------------------------------------------------");
    }
        break;

    case 7 :{
    printf("Enter value of a =");
    scanf("%d",&a);

    printf("Enter value of b =");
    scanf("%d",&b);

    printf("Before valu of a is %d and b is %d",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nAfter valu of a is %d and b is %d",a,b);

    }
        break;

    case 8 :{
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
    }
        break;

    case 9 :{
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
        r = d%8;
        ar[i]=r;
        i++;
        d=d/8;
    }
    i--;
    printf("\nOcta number = ");
    while (i>=0)
    {
        printf("%d",ar[i]);
        i--;
    }
    }
        break;

    case 10 :{
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
    } 
        break;

    default:{
    printf("Enter Invalid Choise");
    printf("\nEnter valid choise = ");
    goto cho ;
    }
        break;
    }
    return 0;
}