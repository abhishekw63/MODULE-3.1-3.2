#include<stdio.h>   //program to convert years into days and vice versa

void main()
{
    float days;
    printf("enter number of day(s):");
    scanf("%f",&days);
    
   float years=days/365;
    
    printf("coversion of days into years is:%f\n",years);
    
    int yrs;
    printf("enter year(s):");
    scanf("%d",&yrs);
    
    int dys=yrs*365;
    
    printf("conversion of year(s) into day(s) is:%d",dys);
    
    
    
}