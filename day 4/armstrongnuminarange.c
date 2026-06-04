#include <stdio.h>

int main()
{
    int start,end,i,n,temp,digit,sum;

    printf("Enter range: ");
    scanf("%d%d",&start,&end);

    for(i=start;i<=end;i++)
    {
        n=i;
        temp=n;
        sum=0;

        while(n!=0)
        {
            digit=n%10;
            sum=sum+(digit*digit*digit);
            n=n/10;
        }

        if(sum==temp)
            printf("%d ",temp);
    }

    return 0;
}