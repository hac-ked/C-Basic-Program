#include <stdio.h>
#include <conio.h>

void main()
{
    int m, i, j, k, n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    m=n-1;
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=m; j++)
        {
            printf(" ");
        }
        for(k=0; k<=i; k++)
        {
            printf("*");
        }
        m--;
        printf("\n");
    }
}