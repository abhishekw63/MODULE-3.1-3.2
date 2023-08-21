#include<stdio.h>       //programme to display use of switch case


int main()
{   int n;
    printf("Enter a number between 1 and 7 to represent the day of the week, starting from Sunday.");
    scanf("%d",&n);
    
    getchar();
   
    switch(n)
    {
        case 1:
        printf("it is sunday");
        break;
        
        case 2:
        printf("it is monday");
        break;
        
        case 3:
        printf("it is tuesday");
        break;
        
        case 4:
        printf("it is wednesday");
        break;
        
        case 5:
        printf("it is thurday");
        break;
        
        case 6:
        printf("it is friday");
        break;
        
        case 7:
        printf("it is saturday");
        break;
        
        default:
        printf("invalid input");    
        
    } 
   
    char c;
    printf("\nEnter the alphabet.\n");
    scanf("%c",&c);
    getchar();
    
    switch(c)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'O':
        case 'o':
        case 'u':
        case 'U':
            printf("it is vowel");
            break;
        
        default:
        printf("it is consonant");
        
    }
    return 0;
}