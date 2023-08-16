#include<stdio.h>       //program to display pattern of  number

void main()
{
   int a;
   
    printf("enter the number:");
    scanf("%d",&a);
    
    int x=1;
    for(int i=0; i<a; i++) 
    {
      
       for(int j=0;j<=i;j++)
    
       {
           printf("%d ",x++);
           
       }printf("\n");
       
    }
}