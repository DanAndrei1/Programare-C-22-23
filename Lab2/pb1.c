#include <stdio.h>
int main()
{
	int number[100], count;
	float sum, average;
	int n=0;
	do
	{
	  printf("/nValue of n(1-100):");
	  scanf("%d", &n);
	}
	while (n<1 || n>100);
	sum=0;
	for (count = 0; count < n; count++)
	{
	  scanf("%d", &number[count]);
	  sum+=number[count];
	}
	average = sum/n;
	printf ("Average of the %d numbers is %7.2f\n", n, average);
	for (count=0; count<n; count++)
		printf("For element %d, the difference between %d and average %7.2f is: %7.2f\n", count, number[count], average, number[count]-average);
	return 0;
}
