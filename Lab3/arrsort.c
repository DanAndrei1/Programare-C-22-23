#include <stdio.h>
void sort (int arr[], int n)
{
	for (int i=0; i<n; i++)
		for (int j=i; j<n; j++)
		if (arr[i]>arr[j])
		{int aux = arr[i]; arr[i]=arr[j]; arr[j]=aux;}
}
int main()
{
	int arr[10]={4, 3, 6 ,2 ,5, 8, 9, 2, 0, 5};
	printf("%s", "The initial array is: ");
	for (int i=0; i<10; i++) printf("%d, %s", arr[i], " ");
	sort (arr, 10);
	printf("%s", "\nThe sorted array is: ");
	for (int i=0; i<10; i++) printf("%d, %s", arr[i], " ");
}
