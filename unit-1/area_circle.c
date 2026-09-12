//calculate the area of circle
#include <stdio.h>
int main()
{
float radius,area;
const float pi=3.14159;
printf("enter the radius of circle");
scanf("%f", & radius);
printf("area of circle=%2f\n",pi*radius*radius);
return 0;
}