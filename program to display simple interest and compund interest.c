#include<stdio.h> 
#include<math.h>
                        //program to display simple interest and compund interest
int main()
{
    float i,SI,p,r,n;
    printf("enter the principal: ");
    scanf("%f",&p);
     printf("enter the  interest rate: ");
    scanf("%f",&r);
      printf("enter the  year: ");
    scanf("%f",&n);
  
   i=p*r*n;
   SI=i/100;
        
      float R=1 + (r/100);
      R=pow(R,n);
      float a=p*R;
      float CI=a-p;
      
   
   
    
    printf("\nsimple interest:%f ",SI);
     printf("\ncompund interest:%f ",CI);
    return 0;
}



