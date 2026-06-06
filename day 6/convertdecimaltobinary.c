#include <stdio.h>

int main()
{
    int n, rem, bin[20], i = 0;

    printf("Enter Decimal Number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        rem = n % 2;
        bin[i] = rem;
        i++;
        n = n / 2;
    }

    printf("Binary Number = ");

    for(i = i - 1; i >= 0; i--)
    {
        printf("%d", bin[i]);
    }

    return 0;
}