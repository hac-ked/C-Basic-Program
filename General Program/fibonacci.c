#include <stdio.h>
#include <conio.h>

void main()
{
    int r1, r2, next, i, n;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    printf("Enter first and second term : ");
    scanf("%d %d",&r1 ,&r2);
    printf("Fibonacci series : ");
    printf("%d %d ", r1, r2);
    for(i=2; i<n; i++)
    {
        next=r1+r2;
        printf("%d ",next);
        r1=r2;
        r2=next;
    }
}