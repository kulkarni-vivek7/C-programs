#include<stdio.h>
void main()
{
    int a,b,c,semimax,finalmax;
    printf("Enter Three numbers\n");
    scanf("%d%d%d",&a,&b,&c);

    semimax = (a > b)? a : b;
    finalmax = (semimax > c)? semimax : c;

    printf("The Greatest number is %d",finalmax);

}