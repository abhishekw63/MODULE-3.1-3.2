#include<stdio.h>   //program to display square and cube 
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    
    int sqr=num*num;
    int cube=num*num*num;
    
    printf("root:%d and cube:%d",sqr,cube);
    return 0;
}



