#include <stdio.h>

int main()
{
    char data;
    printf("%d%d%d%d\n",'a','A','z','Z');
    printf("%d%d\n",'0','9');
    printf("%d%d%d%d%d \n",'$','*','+','/');

    //check whether its a what kind of character

    printf("Enter your character ");
    scanf("%c",&data);

    int dataInt=(int)data;

    if (dataInt>=97 && dataInt<=122)
    {
        printf("you entered a lowercase letter\n");

    }
    else if(dataInt>=65 && dataInt<=90)
    {
        printf("you entered a uppercase letter\n");
    }
    else if(dataInt>=49 && dataInt<=57)
    {
        printf("you entered a number\n");
    }
    else if(dataInt==32)
    {
        printf("you entered a blank space\n");
    }
    else
    {
        printf("you entered a special character ");
    }

}