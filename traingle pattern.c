#include<stdio.h>       //program to display traingle pattern

void main()
{
   int a;
   
    printf("enter the number:");
    scanf("%d",&a);
    
    for(int i=1; i<=a; i++) 
    {
        for(int j=a;j>i;j--) //j=4; ,j=3, j=3 ,j=2,
        {
            printf(" ");
        }
        
        for(int k=1; k<=i;k++) 
        {
            printf("* "); 
            
        } printf("\n");    
        
    }
}