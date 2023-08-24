#include<stdio.h>

int method1(int n)  //using standard method
{
    int sum=0;
    if(n>0)
    {   printf("reversal of number using iterative method is:");
        while(n>0)
        {
            int res=n%10;  
            printf("%d",res);
            sum=sum+res;
          
             n=n/10;
        }   return sum;
    }
    else return -1;
}

int method2(int n,int *sum) //using recursive method
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        int res=n%10;
        printf("%d",res);
        n=n/10;
        *sum=*sum+res;
        method2(n,sum);
    }
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    
    int result1=method1(n);
    printf("\nthe sum of number using iterative method %d\n", result1);
    
    int sum=0;
    
    printf("reversal of number using irecursive method is:");
    method2(n,&sum);
   
    printf("\nthe sum of number using recursive method %d",sum);
}