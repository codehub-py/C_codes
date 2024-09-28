//This program find largest elememt in arrya
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int ar[500],n,i,max;
    printf("-----Check largest number-----");
    xyz : printf("\nEnter arrya limit = ");
    scanf("%d",&n);
    if (n>500)
    {
        printf("Enter limit only 1 to 500");
        goto xyz;
    }
    printf("Enter the element\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    max=ar[0];
    for ( i = 0; i < n; i++)
    {
        if (ar[i]>max)
        {
            max = ar[i];
        }
        
    }
    printf("Largest Element in array is = %d",max);
    
    return 0;
}
