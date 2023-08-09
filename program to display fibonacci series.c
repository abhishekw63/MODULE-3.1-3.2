#include<stdio.h>   //program to display fibonacci series

int main()
{
    int t1,t2,res,num; // 0,1,
    t1=0;
    t2=1;
    res=t1+t2;

    printf("enter the number: ");
    scanf("%d",&num);
    printf("fibonacci series:");

    if(num==1)
    {
         printf("%d ",t1);
    }
    else
    {
    printf("%d %d ",t1,t2);

    for(int i=3;i<=num;i++)
    {
        printf("%d ",res);
        t1=t2;
        t2=res;
        res=t1+t2;
    }
    }
}
