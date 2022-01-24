#include <stdio.h>
#include <conio.h>

void main()
{
    int fac=1, i, n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fac*=i;
    }
    printf("Factorial of %d is %d",n ,fac);
}