#include<stdio.h>
int main()
{
  string numbers[] = {"", "one", "two", "three", "four", "five", "six", 
"seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", 
"fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteteen"};
 
  string tens[] = {"", "", "twenty", "thrity", "fourty", "fifty", 
"sixty", "seventy", "eighty", "ninty"};

  int n;
  
  do
  {
  	scanf("%d", &n);
	if (n<1 || n>999) printf("Invalid input!\n");
  }
  while (n);

  if (n>=100)
  {
	printf("%s hundred", numbers[n/100]);
	n/=10;
	if (n>100) printf(" and ");
	n-= (n/100*100);
  }

  if (n>20)  
  {

	printf("%s", tens[n/10]);
	n%=10;
        printf(" ");
	printf("%s", numbers[n]);
  }
  else
  {
	printf("%s", numbers[n])	
  } 

  return 0;
}
