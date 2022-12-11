#include <stdio.h>
#include <string.h>
char a[10];
int main()
{
    printf("Enter the initial array: \n");
    scanf("%s", a);
    unsigned long len;
    len = strlen(a);
    for (int i=0; i<len/2; i++)
    {
        char aux = *(a+i);
        *(a+i) = *(a+len-i-1);
        *(a+len-i-1) = aux;
    }
    printf("Reversed array is:\n");
    printf("%s\n", a);
}
