#include <stdio.h>

void max(int num1)
{
    num1 > 0 ? (num1 %2==0 ? printf("the number is even") : printf("the number is odd") ) : printf("invalid input");
}

int main()
{
    printf("programme to display odd or even number using ternary operator.\n");
    int num1;

    printf("Enter the number: ");
    scanf("%d", &num1);

    max(num1);
    return 0;
}
