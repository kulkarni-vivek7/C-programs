#include<stdio.h>
void main()
{
    int n,sum = 0;
    printf("Enter The value of N\n");
    scanf("%d",&n);

    for(int i = 1;i <= n;i++)
    {
        sum = sum + i;
    }

    printf("The sum of natural numbers 1 to %d is = %d",n,sum); 
}