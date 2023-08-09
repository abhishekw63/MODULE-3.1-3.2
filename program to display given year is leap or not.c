#include<stdio.h> 
#include<math.h>
                        //program to display given year is leap or not
int main()
{
   int num;
   printf("enter the year: ");
   scanf("%d",&num);
   
   if(num%4==0)
   {
       printf("given year is leap year");
   }
   else
   {
       printf("given year is not leap year");
   }
   
    return 0;
}



