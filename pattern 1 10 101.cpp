#include<stdio.h>   //programme to display pattern 1 10 101 1010

int main()
{
    int i,n,j;
    printf("enter the number:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {  
        
        for(j=1;j<=i;j++)
        {
            printf("%d",j%2);
            
        }
        printf("\n");
    }
    

}
