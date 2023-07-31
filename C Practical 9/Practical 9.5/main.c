#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,re=0;
    printf("Enter your number: ");
    scanf("%d",&num);

    do
    {
        re=re*10;
        re=re+num%10;
        num=num/10;

    }
    while (num>0);
    printf("Reverce number: %d",re);

}
