#include<stdio.h>
void main()
{
    int n,sum = 0,temp;
    printf("Enter a number\n");
    scanf("%d",&n);

    temp = n;
    while(temp != 0)
    {
        sum = sum + temp % 10;
        temp = temp / 10;
    }
    printf("The sum of digits of %d is %d",n,sum);
}