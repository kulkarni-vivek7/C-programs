#include<stdio.h>
void main()
{
    int n,rev = 0,rem;
    printf("Enter a number\n");
    scanf("%d",&n);
    int temp = n;

    while(temp != 0)
    {
        rev = rev*10 + (temp % 10);
        temp = temp / 10;
    }

    printf("\nThe reverse of %d is %d",n,rev);
}