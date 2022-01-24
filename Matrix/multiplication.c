#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, k, a[10][10], b[10][10], c[10][10], c1, c2, r1, r2;
    printf("Enter the number of colums and rows : ");
    scanf("%d %d", &c1, &r1);
    printf("Enter number of colums and rows : ");
    scanf("%d %d", &c2, &r2);
    if(r1==c2)
    {
        printf("Enter elements of first matrix : ");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
            printf("\n");
        }
        printf("Enter elements of second matrix : ");
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
            printf("\n");
        }
        printf("After multiplication of first and second matrix is : ");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                c[i][j]=0;
                for(k=0; k<c2; k++)
                {
                    c[i][j]+=(a[i][k]*b[k][j]);
                }
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Multiplication can not be carry out.");
    }
}