#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter number 1 and number 2: ");
    scanf("%d%d", &num1,&num2);
    if (num1 % num2 == 0)
    {
        printf("The 1st number is the multiple of the 2nd number. ");

    }
    else
    {
        printf("The 1st number in not a multiple of the 2nd number ");
    }
}

