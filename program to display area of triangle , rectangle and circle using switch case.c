#include<stdio.h> 
#include<math.h>
                        //program to display area of triangle , rectangle and circle using switch case
int main()
{
  float r;         //circle
  printf("enter the value of radius: ");
  scanf("%f",&r);
  
  float len,bre;    //rectangle
  printf("enter the value of length and breadth: ");
  scanf("%f %f",&len,&bre);
  
  float b,h;    //triangle
  printf("enter the value of base and height: ");
  scanf("%f %f",&b,&h);
  
  int choice;
  printf("\n enter your choice");
  printf("\n1.circle");
   printf("\n2.rectangle");
    printf("\n3.triangle\n");
    scanf("%d",&choice);
  
  switch(choice)
  {
      case 1:
      float circle= 3.14*r*r;
      printf("\n area of circle:%f",circle);
      break;
      
      case 2:
      float rectangle=len*bre;
      printf("\n area of rectangle:%f",rectangle);
      break;
      
      case 3:
      float triangle =0.5 * b * h;
      printf("\narea of triangle:%f",triangle);
      break;
      
      default:
      {
          printf("invalid choice");
      }
      
  }
  
  
}
  




