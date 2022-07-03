#include<stdio.h>
void main()
{
    int startpoint, endpoint,sum = 0;
    printf("Enter the starting range number\n");
    scanf("%d",&startpoint);
    printf("\nEnter the ending range number\n");
    scanf("%d",&endpoint);

    for(int i = startpoint;i <= endpoint;i++)
    {
        sum = sum + i;
    }
    printf("\nThe sum of number between %d and %d is %d",startpoint,endpoint,sum);
}