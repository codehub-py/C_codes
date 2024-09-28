// This program search the element in arrya useing binary search
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int ar[500],n,i,j,tem,big,end,mid,f=0,s;
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
    printf("Enter Element you want to search = ");
    scanf("%d",&s);
    big = 0;
    end = n-1;
    while (big <= end)
    {
        mid = (big+end)/2;
        if (s==ar[mid])
        {
            f =1;
            break;
        }
        else if (s > ar[mid])
        {
            big = mid+1;
        }
        else if (s<ar[mid])
        {
            end = mid - 1;
        }
        
    }
    
    if (f == 1)
    {
       printf("Serarching Successful");
    }
    else
        printf("Searching fail");
    
    
    return 0;
}

