#include <stdio.h>      //program to display reverse number and thier sum

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    int sum=0;
    printf("reverse number: ");
    while(num>0)  
    { 
       int a=num%10;   
       printf(" %d ",a);
       sum=sum+a; 
        
       num=num/10;   
    }
        printf("\nthe sum is:%d",sum);

    return 0;
}
