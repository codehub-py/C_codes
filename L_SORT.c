// This program sort the element in arrya
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int ar[500],n,i,j,tem;
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
    for ( i = 0; i < n; i++)
    {
        for ( j = i +1; j < n; j++)
        {
            if (ar[j]<ar[i])
            {
                tem = ar[i];
                ar[i]=ar[j];
                ar[j]=tem;
            }
            
            
        }
        
    }
    printf("Sorted list \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",ar[i]);
    }
    
    
    
    
    return 0;
}

