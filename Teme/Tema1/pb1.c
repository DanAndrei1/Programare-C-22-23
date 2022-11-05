#include <stdio.h>
int main()
{
int a, b;
printf("Enter the first value:");
scanf("%d", &a);
printf("Enter the second value:");
scanf("%d", &b);
int s=a+b;
printf("The sum of the two values is: %d", s);
printf("\n");
float avg = s/2.0;
printf("The average of the two values is: %f", avg);
printf("\n");
s=a*a+b*b;
printf("The sum of the squares of the two numbers is: %d", s);
printf("\n");
return 0;
}

