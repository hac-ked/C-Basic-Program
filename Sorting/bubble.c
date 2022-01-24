#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, j, a[10], max;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                max=a[j];
                a[j]=a[j+1];
                a[j+1]=max;
            }
        }
    }
    printf("Sorted array is : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}