#include<stdio.h>

 
void main()
{
   int a;
   
    
    printf("enter the number:");
    scanf("%d",&a);
    
    for(int i=a; i>=1; i--) 
    {
        for(int j=a;j>i;j--) 
        {
            printf(" ");
        }
        
        for(int k=1; k<=i;k++) 
        {
            printf("*"); 
        }printf("\n");    
        
    }
}