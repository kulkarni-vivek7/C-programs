#include<stdio.h>
int main()
{
    int n,r,temp,reverse = 0;
    printf("\nEnter a number to get the reverse of it: ");
    scanf("%d",&n);
    temp = n;
    while(temp != 0)
    {
        r = temp % 10;
        reverse = reverse * 10 + r;
        temp /= 10;
    }
    printf("\nThe Reverse of %d is %d\n",n,reverse); 
    return 0;
}