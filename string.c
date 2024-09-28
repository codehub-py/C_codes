#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char s1[100],s2[100],i;
    printf("Enter first string = ");
    gets(s1);
    printf("Enter second string = ");
    gets(s2);
    printf("Length of string 1 is %d",strlen(s1));
    printf("\nLength of string 2 is %d",strlen(s2));
    printf("\nString 1 in upper case is = %s",strupr(s1));
    printf("\nString 2 in upper case is = %s",strupr(s2));
    printf("\nString 1 in lower case is = %s",strlwr(s1));
    printf("\nString 2 in lower case is = %s",strlwr(s2));
    printf("\nReverse of string 1 is %s",strrev(s1));
    printf("\nReverse of string 2 is %s",strrev(s2));

    return 0;
}
