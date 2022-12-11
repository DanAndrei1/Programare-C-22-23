#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c,i,j,k;
    printf("enter the number of rows: \n");
    scanf("%d",&r);
    printf("enter the number of columns: \n");
    scanf("%d",&c);
    int* a = malloc((r * c) * sizeof(int));
    int* b = malloc((r * c) * sizeof(int));
    int* mul = malloc((r * c) * sizeof(int));
    printf("enter the first matrix elements: \n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&*(a + i*c + j));
    printf("enter the second matrix elements: \n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&*(b + i*c + j));
    printf("multiply of the matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            *(mul + i*c + j)=0;
            for(k=0;k<c;k++)
                *(mul + i*c + j) += *(a + i*c + k) * *(b + k*c + j);
        }
    }
    for(i=0;i<r;i++,printf("\n"))
        for(j=0;j<c;j++)
            printf("%d\t",*(mul + i*c + j));
    
    free(a);
    free(b);
    free(mul);
    
    return 0;
}
