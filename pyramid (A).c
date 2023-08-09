#include<stdio.h>

int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    
  int i=1;
  while(i<=n)
  {
      int j=1;
      while(j<=i)
      {
          printf("*");
          j++;
      } printf("\n");
    i++;
  }
}