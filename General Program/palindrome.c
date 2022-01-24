#include <stdio.h>
#include <conio.h>

void main()
{
    int rev=0, i, n, r;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=n; i!=0; )
    {
        r=rev*10;
        rev=r+(i%10);
        i/=10;
    }
    if(n==rev)
    {
        printf("%d is a Palindrome number.,", n);
    }
    else
    {
        printf("%d is a Palindrome number ", n);
    }
}