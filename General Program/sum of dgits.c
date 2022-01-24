#include <stdio.h>
#include <conio.h>

void main()
{
    int i, n, sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=n; i!=0; )
    {
        sum+=i%10;
        i/=10;
    }
    printf("%d is sum of digits of %d", sum, n);
}