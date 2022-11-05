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
  int valmax=a;
  if (b>valmax) valmax = b;
  if (c>valmax) valmax = c;
  if (d>valmax) valmax = d;
  if (e>valmax) valmax = e;
  printf("The largest value of the five is: %d \n", valmax);
  return 0;
}
