#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter Number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        if(n % 2 == 1)
        {
            count++;
        }

        n = n / 2;
    }

    printf("Total Set Bits = %d", count);

    return 0;
}