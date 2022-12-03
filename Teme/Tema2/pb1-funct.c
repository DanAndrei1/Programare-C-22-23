#include <stdio.h>
int maxim (int v[], int l)
{
  int mx = v[0];
  for (int i=0; i<l; i++)
	if (v[i] > mx) mx = v[i];
  return mx;
}

int minim (int v[], int l)
{
  int mn = v[0];
  for (int i=0; i<l; i++)
	if (v[i] < mn) mn = v[i];
  return mn;
}

int getvalidnumber()
{
     	int n;
	if (scanf("%d", &n) == 1) return n;
	else
	  printf("Invalid input!\n");
	  return;
}

int v[100], n;

int main()
{
  printf("Enter the array size: ");
  n = getvalidnumber();
  for (int i=0; i<n; i++)
  {	printf("Enter element %d of array: ", i+1);
	v[i] = getvalidnumber();
  }
  printf("The largest element is: %d \n", maxim (v, n));
  printf("The smallest element is: %d \n", minim (v, n));
  return 0;
}
