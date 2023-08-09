#include<stdio.h> 
#include<math.h>
                        //program to display total marks and percentage of 5 subject
int main()
{
  float sub1,sub2,sub3,sub4,sub5;
  printf("enter the marks of subject 1 to 5 respectively:\n");
  scanf("%f\n%f\n%f\n%f\n%f",&sub1,&sub2,&sub3,&sub4,&sub5);
  
  float total=sub1+sub2+sub3+sub4+sub5;
  
  printf("your total marks are:%f",total);
  
  float per=total/5;
  printf("\nyour percentage is %f",per);
  
  switch(per>75)
  {
      case 1:
      printf("\nyou achieved DISTINCTION");
      break;
  }
  
   switch(per>60 && per<=75)
  {
      case 1:
      printf("\nyou achieved FIRST CLASS");
      break;
  }
   switch(per>50 && per<=60)
  {
      case 1:
      printf("\nyou achieved SECOND CLASS");
      break;
  }
   switch(per>35 && per<=50)
  {
      case 1:
      printf("\nyou achieved PASS CLASS");
      break;
  }
  switch(per<35)
  {
      case 1:
      printf("\nyou are FAILED");
      break;
  }
  return 0;
}
  




