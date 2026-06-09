#include <stdio.h>

int main()
{
    int x, n, i;
    int ans = 1;

    printf("Enter Base and Power: ");
    scanf("%d%d", &x, &n);

    for(i = 1; i <= n; i++)
    {
        ans = ans * x;
    }

    printf("Result = %d", ans);

    return 0;
} 