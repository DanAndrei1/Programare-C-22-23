#include<stdio.h>

int getvalidnumber()
{
	int n;
	if (scanf("%d", &n) == 1)
		return n;
  	else 
	{
	     printf("Invalid input! \n");
	}
}

int main()
{
  int n, v[100];
  
  printf("Enter the array size:");
  n = getvalidnumber();
  for (int i=0; i<n; i++)
  {
  printf("\nEnter element %d of array:", i+1);
  v[i] = getvalidnumber();	
  }

  int valmin = v[0];
  int valmax = v[0];
  for (int i=0; i<n; i++)
  {
	if (v[i]>valmax) valmax = v[i];
	if (v[i]<valmin) valmin = v[i];
  }

  printf("The largest element of the array is: %d\n", valmax);
  printf("The smallest element of the array is: %d\n", valmin);	

  return 0;
}
