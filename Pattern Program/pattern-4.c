#include <stdio.h>
#include <conio.h>

void main()
{
    int m, n, i, j, k;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    m=n;
    for(i=0; i<=n; i++)
    {
        for(j=m; j>=0; j--)
        {
            printf(" ");
        }
        for(k=1; k<=((2*i)+1); k++)
        {
            printf("*");
        }
        m--;
        printf("\n");
    }
}