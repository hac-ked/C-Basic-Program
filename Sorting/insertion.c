#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, n, a[10], max;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    printf("Enter elements of array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=1; i<n; i++)
    {
        max=a[i];
        for(j=i; j>0 && max<a[j-1]; j--)
        {
            a[j]=a[j-1];
        }
        a[j]=max;
    }
    printf("Sorted array : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}