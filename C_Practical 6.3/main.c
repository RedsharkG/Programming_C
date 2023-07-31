#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float radius, PI=3.14;

    printf("Menu:\n");
    printf("1.Calculate circumference of a circle\n");
    printf("2.Calculate area of a circle\n");
    printf("3.Calculate volume of a spherd\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    printf("Enter the radius: ");
    scanf("%f",&radius);

    switch (choice)
    {
        case 1: printf("Circumference: %2f\n",2*PI*radius);break;
        case 2: printf("Area: %2f\n",PI*radius*radius);break;
        case 3: printf("Circumference: %2f\n",4/3.0*PI*radius*radius);break;
        default: printf("Invalid choice,\n");
    }
}