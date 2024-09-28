// This program search number in arrya using linear search
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int ar[500],n,i,s,f=0;
    printf("---Sort the list---");
    xyz : printf("\nEnter limitof arrya = ");
    scanf("%d",&n);
    if (n>500)
    {
        printf("Enter limit 1 to 500");
        goto xyz;
    }
    printf("Enter the elements \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter Element you want to search = ");
    scanf("%d",&s);
    for ( i = 0; i < n; i++)
    {
        if (ar[i]==s)
        {
            f = 1;
            break;
        }
        
    }
    if (f == 1)
    {
       printf("Serarching Successful");
    }
    else
    {
        printf("Searching fail");
    }
    return 0;
}
