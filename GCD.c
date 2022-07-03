#include<stdio.h>
void main()
{
    int a,b,gcd,i;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    for(i = 1; i <= a && i <= b;i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    printf("The GCD of %d and %d is %d",a,b,gcd);
}