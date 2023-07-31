#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0,num,re;
    printf("Enter your numbers:");
    scanf("%d",&num);

    while (num!=0)
    {
        re=num%10;
        sum=sum+re;
        num=num/10;
    }
    printf("Sum of the all digits %d",sum);


}
