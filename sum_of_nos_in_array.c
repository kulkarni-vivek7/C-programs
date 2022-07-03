#include<stdio.h>
int main()
{
    int n,i,sum = 0, *ptr;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int var[n-1];
    printf("\nEnter %d elements of the array\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&var[i]);
    }
    ptr = var;
    for(i=0;i<n;i++)
    {
        sum += *ptr;
        ptr++;
    }
    printf("The Sum is = %d\n",sum);
    return 0;
}