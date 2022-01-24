#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, k ,n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=n; j++)
        {
            if((i==0) || (i==n) || (j==0) || (j==n))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    } 
}