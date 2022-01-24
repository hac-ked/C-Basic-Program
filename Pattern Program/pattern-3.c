#include <stdio.h>
#include <conio.h>

void main()
{
    int m, n, i, j, k;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    m=n-1;
    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf(" ");
        }
        for(k=0; k<=m; k++)
        {
            printf("*");
        
        }
        m--;
        printf("\n");
    } 
}