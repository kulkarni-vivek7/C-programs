#include<stdio.h>
void main()
{
    int a,b,max;
    /* 
     GREATEST OF 2 NUMBERS USING TURNARY OPERATOR
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    max = (a > b)? a : b;

    printf("The Greatest number is %d",max);
    */

    // GREATEST OF 2 NUMBERS USING IF-ELSE  
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    if(a > b)
    {
        printf("The Greatest number is %d",a);
    }
    else
    {
        printf("The Greatest number is %d",b);
    }
}