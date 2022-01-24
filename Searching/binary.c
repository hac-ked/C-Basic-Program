#include <stdio.h>
#include <conio.h>

void main()
{
    int i, a[10], first, last, mid, n, s;
    printf("Enter the number of element : ");
    scanf("%d", &n);
    printf("Enter elements of array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to be searched : ");
    scanf("%d", &s);
    first=0;
    last=n-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if((a[mid])==s)
        {
            break;
        }
        else if((a[mid])<s)
        {
            last=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    if(s==a[mid])
    {
        printf("%d is found at location %d.", s, mid+1);
    }
    else
    {
        printf("The %d is not found.", s);
    }
}