#include <stdio.h>
int main()
{
  int a, b, c, d, e;
  printf("Enter the first value: ");
  scanf("%d", &a);
  printf("Enter the second value: ");
  scanf("%d", &b);
  printf("Enter the third value: ");
  scanf("%d", &c);
  printf("Enter the fourth value: ");
  scanf("%d", &d);
  printf("Enter the fifth value: ");
  scanf("%d", &e);
  int valmax=a, valmin=a;
  if (b>valmax) valmax = b;
  if (b<valmin) valmin = b;
  if (c>valmax) valmax = c;
  if (c<valmin) valmin = c;
  if (d>valmax) valmax = d;
  if (d<valmin) valmin = d;
  if (e>valmax) valmax = e;
  if (e<valmin) valmin = e;
  printf("The largest value of the five is: %d \n", valmax);
  printf("The smallest value of the five is: %d \n", valmin);
  return 0;
}
