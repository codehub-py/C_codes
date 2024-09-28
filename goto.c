// This is the program that help to generate percentage of student 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int M,H,E,Ma,S,SS,T,P;
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
    P = T/6;
    printf("sr.no\t\tsubjects\t\tMax.marks\tyour marks\t\t");
    printf("\n  1\t\tMARATHI\t\t\t  100\t\t   %d",M);
    printf("\n  2\t\tHINDI\t\t\t  100\t\t   %d",H);
    printf("\n  3\t\tENGLISH\t\t\t  100\t\t   %d",E);
    printf("\n  4\t\tMATHMATICS\t\t  100\t\t   %d",Ma);
    printf("\n  5\t\tSCIENCE\t\t\t  100\t\t   %d",S);
    printf("\n  6\t\tSOCIAL SCIENCE\t\t  100\t\t   %d",SS);
    printf("\nTotal marks out of 600 is = %d",T);
    printf("\nPercentage = %d",P);
    if(P<35)
    {
        printf("\nYour Fail 'Better luck' try next time");
    }
    else if (P>=35 && P<=50)
    {
        printf("\nYour Pass in 'THIRD CLASS' Congratulations🎉 ");
    }
    else if(P>=50 && P<=60)
    {
        printf("\nYour Pass in 'SECOND CLASS' Congratulations🎉 ");
    }
    else if(P>=60 && P<=75)
    {
        printf("\nYour Pass in 'FIRST CLASS' Congratulations🎉 ");
    }
    else if(P>=75)
    {
        printf("\nYour Pass in 'FIRST CLASS DIST.' Congratulations🎉 ");
    }
    return 0;
}
