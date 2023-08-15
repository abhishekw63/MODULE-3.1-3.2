#include<stdio.h>   //programme to display A BC CDE

int main()
{
    int i,n,j;
    printf("enter the number:");
    scanf("%d",&n);
    
    char c='A';
    for(i=0;i<n;i++)
    {  
        int a=0;
        for(j=0;j<=i;j++)
        {
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
    

}
