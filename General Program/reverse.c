#include <stdio.h>
#include <conio.h>

void main()
{
    int n, rev=0, i, r;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=n; i!=0; )
    {
        r=rev*10;
        rev=r+i%10;
        i/=10;
    }
    printf("After reversing the number : %d",rev);
}