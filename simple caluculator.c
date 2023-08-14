#include<stdio.h>   //program to make a simple caluculator

void main()
{
    int add,sub,mul,divi,mod,num1,num2;
    
    printf("enter the two number:");
    scanf("%d %d",&num1,&num2);
    
    add=num1+num2;
    sub=num1-num2;
    divi=num1/num2;
    mod=num1%num2;
    
    printf("addition is:%d\n",add);
    printf("substraction is:%d\n",sub);
    printf("diviosn is:%d\n",divi);
    printf("modulus is:%d\n",mod);
    
    
    
}