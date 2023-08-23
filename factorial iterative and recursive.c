#include<stdio.h>       

int Ifact(int num)
{
    int res=1;
    if(num>=0)
    {
        for(int i=1;i<=num;i++)
        {
            res=res*i;
        }
        return res;
    }
    else
    {
        printf("  invalid input.\n"); 
        return -1;
    }
}

int Rfact(int num)
{   if(num>=0)
   {
        if(num==0)
        {
            return 1;
        }
        else
        {
            return Rfact(num-1) * num; 
        }
   }
   
   else
   {
       printf("  invalid input.\n");
       return -1;
   }
}

int main()

{
    printf("Programme to display factorial of given number.");
    
    int n;
    printf("\nenter the number.");
    scanf("%d",&n);
    
    int iterative=Ifact(n);
    printf("1)factorial using iterative method:%d\n",iterative);
    
    printf("2)factorial using recursive method:%d",Rfact(n));
}