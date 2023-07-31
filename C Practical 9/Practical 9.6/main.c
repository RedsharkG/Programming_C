#include <stdio.h>

int main()
{
    int base,exp,result=1;
    printf("Enter the base number: ");
    scanf("%d",&base);
    printf("Enter the exponent number: ");
    scanf("%d",&exp);

    for (int i=0; i<exp; i++)
    {
        result*=base;

    }
    printf("Answer is: %d",result);
}

