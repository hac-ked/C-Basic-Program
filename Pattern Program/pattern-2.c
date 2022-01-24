#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int i, j, n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(i=n; i>=0; i--)
    {
        for(j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
