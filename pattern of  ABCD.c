#include<stdio.h>       //program to display pattern of  ABCD

void main()
{
   int a;
   
    printf("enter the number:");
    scanf("%d",&a);
    
   
    for(int i=0; i<a; i++) 
    {
       char c='A';
       for(int j=0;j<=i;j++)
       {
           printf("%c ",c++);
           
       }printf("\n");
       
    }
}