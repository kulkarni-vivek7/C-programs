#include<stdio.h>

void fibo_recurssion(int n)
{
    static int a = 0, b = 1, c;
    if(n!=0)
    {
        c = a + b;
        printf(" %d",c);
        a = b;
        b = c;
        fibo_recurssion(n-1);
    }
}

int main()
{
    int n;
    printf("\nEnter a number to print its fibonacci series: ");
    scanf("%d",&n);
    printf("\n%d %d",0,1);
    fibo_recurssion(n-2);
    return 0;
}