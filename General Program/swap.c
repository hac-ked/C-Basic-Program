#include <stdio.h>
#include <conio.h>

void main()
{
    int n, x, a;
    printf("Enter two numbers : ");
    scanf("%d %d", &n, &x);
    a=x;
    x=n;
    n=a;
    printf("Swapped number : %d %d", n, x);
}