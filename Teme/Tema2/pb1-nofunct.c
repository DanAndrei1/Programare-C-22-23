#include<stdio.h>

int getvalidnumber()
{
	int n;
	while (1)
	{
	  if (scanf("%d", &n) == 1)
		return n;
  	  else 
	  {
	     printf("Input is not a number! \n");
	     scanf("%d", &n);
	  }
	}
}

int main()
{
  int n, v[100];
  
  printf("Enter the array size:");
  int valid = 1;
  do
  {
	valid = 1;
       	scanf("%d", &n);
        if ((n<2 || n>100) && valid) {printf("Invalid input!\n"); 
valid=0;}
  }
  while (valid == 0);

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
