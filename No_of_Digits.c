#include<stdio.h>
void main()
{
    int n,count = 0;
    printf("Enter a number\n");
    scanf("%d",&n);
    int temp = n;
    while(temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    printf("The Number of digits in %d is %d",n,count);
}