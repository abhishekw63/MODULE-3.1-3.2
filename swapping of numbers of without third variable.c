#include<stdio.h>   //program to display swapping of numbers of without third variable

void main()
{
        int a,b; //5 2
        printf("enter the two value to be swapped:");
        scanf("%d %d",&a,&b);
        a=a+b;  //a=7
        b=a-b;  //b=5
        a=a-b;
        printf("number after swapping:%d %d",a,b);
    
    
    
    
}