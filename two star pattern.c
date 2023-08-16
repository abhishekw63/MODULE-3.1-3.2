#include<stdio.h>       // two star pattern

int main()
{
    int i,j,n;
    
    printf("enter the number:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    int k,l;
    
    for(k=n;k>=0;k--)
    {
        for(l=0;l<=k;l++)
        {
            printf("* ");
        }
        printf("\n");
    }
}