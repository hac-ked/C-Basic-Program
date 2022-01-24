#include <stdio.h>
#include <conio.h>

void main()
{
    int i, n, a[10], s;
    printf("Enter number of elements of array : ");
    scanf("%d", &n);
    printf("Enter elements of array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to be searched : ");
    scanf("%d", &s);
    for(i=0; i<n; i++)
    {
        if(s==a[i])
        {
            printf("%d is found at %d position", s, ++i);
            break;
        }
    }
}