#include<stdio.h>
int method1(int num)
{
    int sum;
    int lastDigit;
    int firstDigit;
    
    lastDigit=num%10;
    
    while(num>=10)
    {
        num=num/10;
    }
    
    firstDigit=num;
    
    sum=firstDigit+lastDigit;
    return sum;
    
}
int calLength(int num)
{   
    int length=0;
    while(num!=0)
    {
       num=num/10;
       length++;
    }
    return length;
}


int method2(int num,int *sum,int A[10])
{
    int length=calLength(num);
    
    for(int i=length-1; i>=0; i--)
    {
        A[i]=num%10;
        num=num/10;
    }
    *sum=A[0]+ A[length-1];
    return *sum;
}

int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    
    printf("sum using standard method:%d\n",method1(num));
    
    int A[10];
    int sum1=0;
    method2(num,&sum1,A);
    printf("sum using array method:%d",sum1);
}