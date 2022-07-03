#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter any three integer nos: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("The first largest number is: %d\n",a);
            if(b>c)
            {
                printf("The second largest number is: %d\n",b);
            }
            else
            {
                printf("The second largest number is: %d\n",c);
            }
        }
        else
        {
            printf("The first largest number is: %d\n",c);
            if(a>b)
            {
                printf("The second largest number is: %d\n",a);
            }
            else
            {
                printf("The second largest number is: %d\n",b);
            }
        }

    }
    else
    {
        if(b>c)
        {
            printf("The first largest number is: %d\n",b);
            if(a>c)
            {
                printf("The second largest number is: %d\n",a);
            }
            else
            {
                printf("The second largest number is: %d\n",c);
            }
        }
        else
        {
            printf("The first largest number is: %d\n",c);
            if(a>b)
            {
                printf("The second largest number is: %d\n",a);
            }
            else
            {
                printf("The second largest number is: %d\n",b);
            }
        }
    }
    return 0;
}