#include<stdio.h>
/*
void Fibonacci(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if(n > 0)
    {
        n3 = n1 + n2;
        printf(" %d",n3);
        n1 = n2;
        n2 = n3;
        Fibonacci(n - 1);
    }
}
*/
void main()
{
    /* 
    FIBONACCI SERIES DISPLAY USING RECURSION
    int a = 0, b = 1, sum = 0, n;
    printf("Enter the nth term\n");
    scanf("%d",&n);
    printf("\nFibonacci series is\n");
    printf("%d %d",a,b);
    Fibonacci(n-2);
    */
    int a = 0, b = 1, sum = 0, n;
    printf("Enter the nth term\n");
    scanf("%d",&n);
    printf("\nFibonacci series is\n");
    printf("%d %d",a,b);
    
    for(int i = 2;i < n;i++)
    {
        sum = a + b;
        printf(" %d",sum);
        a = b;
        b = sum;
    }
}