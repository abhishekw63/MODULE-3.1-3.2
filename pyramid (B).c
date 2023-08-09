#include <stdio.h>      //pyramid 2
and thier sum
int main()
{
    int n;
    int j;
    printf("Enter the number: ");
    scanf("%d", &n);
    int sum=1;
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           printf("%d ",sum);
           sum++;
            
        }  printf("\n");
    
    }
}
