#include <stdio.h>
#include <math.h>

// program to display whether the given number is prime or not
int main()
{
   int num;
   printf("enter the number: ");
   scanf("%d", &num); ///111

   int prime = 1;

   for (int i = 2; i <= num - 1; i++)
   {
       if (num % i == 0) ///
       {
           prime = 0;
           break;
       }
   }

   if (prime == 0)
   {
       printf("number is not prime");
   }
   else if(num==0 || num==1)
   {
       printf("number is neither prime nor composite");
   }

    else
   {
       printf("number is  prime");
   }


   return 0;
}
