#include<stdio.h>

int Factorial(int n)
{
    int fact = 1,i;
    for(i = 1;i<=n;i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n,r,temp,sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp = n;
    while(temp != 0)
    {
        r = temp % 10;
        sum += Factorial(r);
        temp /= 10;
    }
    if(n == sum)
    {
        printf("\n%d is a Strong number",n);
    }
    else
    {
        printf("\n%d is not a Strong number",n);
    }
    return 0;
}