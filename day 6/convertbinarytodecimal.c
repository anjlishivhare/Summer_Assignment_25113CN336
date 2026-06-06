#include <stdio.h>

int main()
{
    long long bin;
    int dec = 0, rem, power = 1;

    printf("Enter Binary Number: ");
    scanf("%lld", &bin);

    while(bin != 0)
    {
        rem = bin % 10;
        dec = dec + rem * power;
        power = power * 2;
        bin = bin / 10;
    }

    printf("Decimal Number = %d", dec);

    return 0;
}