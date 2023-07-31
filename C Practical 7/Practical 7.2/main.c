#include<stdio.h>
int main()
{
    const float PI=3.141590;
    float area,di,cir,rad;

    printf("Enter the radius of the circle");
    scanf("%f", &rad);

    printf("Diameter of the circle is:  %.2f \n", 2*rad);
    printf("Circumference of the circle is:  %.2f \n", 2*PI*rad);
    printf("Area of the circle is: %.2f \n",PI*rad*rad);

    return 0;



}
