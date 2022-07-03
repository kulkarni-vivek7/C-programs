#include<stdio.h>
int is_palindrome_recursion(int n)
{
    int rev = 0;
    if (n != 0)
    {
        rev = rev * 10 + (n % 10);
        is_palindrome_recursion(n / 10);
    }
    else if (rev == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}    
    
void main()
{
    /*
    PALINDROME RPOBLEM USING NORMAL WAY
    int num,temp,rev = 0;
    printf("Enter a number\n");
    scanf("%d",&num);
    temp = num;

    while(temp != 0)
    {
        rev = rev * 10 + (temp % 10);
        temp = temp / 10;
    }

    if (rev == num)
    {
        printf("The number %d is Palindrome",num);
    }
    else
    {
        printf("The number %d is not Palindrome",num);
    }
    */
   /*
    PALINDROME NUMBER USING RECURSION
    int num, palindrome = 0;
    printf("Enter a number\n");
    scanf("%d",&num);

    palindrome = is_palindrome_recursion(num);

    if (palindrome == 1)
    {
        printf("The number %d is a Palindrome",num);
    }
    else
    {
        printf("The number %d is not a palindrome",num);
    }
    */    
}