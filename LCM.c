#include<stdio.h>
void LCM(int lcm,int a, int b)
{
    while(1)
    {
        if(lcm % a == 0 && lcm % b == 0)
        {
            printf("The LCM of %d and %d is %d",a,b,lcm);
            break;
        }
        ++lcm;
    }
}
void main()
{
    int a, b, lcm;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    lcm = (a > b)? a : b;

    LCM(lcm,a,b);

/*
    while(1)
    {
        if(lcm % a == 0 && lcm % b == 0)
        {
            printf("The LCM of %d and %d is %d",a,b,lcm);
            break;
        }
        ++lcm;
    }
    */
}