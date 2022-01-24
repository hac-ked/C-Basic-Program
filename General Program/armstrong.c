#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int digit=0, n, i, sum=0, r, rev=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=n; i!=0; )
    {
        digit++;
        i/=10;
    }
    for(i=n; i!=0; )
    {
        r=i%10;
        rev+=pow(r,digit);
        i/=10;
    }
    if(n==rev)
    {
        printf("%d is a Armstrong number.",rev);
    }
    else
    {
        printf("%d is not a Armstrong number.",n);
    }
}