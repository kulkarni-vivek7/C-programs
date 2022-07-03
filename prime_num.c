#include<stdio.h>
int is_prime_function(int n)
{
    int i;
    for( i = 2;i <= n/2;i++)
    {
        if (n % 2 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int is_prime_pointer(int *p)
{
    int i;
    for(i = 2;i <= *p/2;i++)
    {
        if (*p % 2 == 0)
        {
            return 1;
            break;
        }
        else
        {
            return 0;
        }
    }
}
void main()
{
    /*
    PRIME NUMBER USING FOR LOOP
    int num, i, flag = 0;
    printf("Enter a number\n");
    scanf("%d",&num);

    for(i = 2;i <= num/2;i++)
    {
        if(num % 2 == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("The number %d is Prime number",num);
    }
    else
    {
        printf("The number %d is not a prime number",num);
    }
    */
   /*
   int *p,n,flag = 0;
   printf("Enter a number\n");
   scanf("%d",&n);
   p = &n;
   flag = is_prime_pointer(p);

   if (flag == 0)
   {
       printf("The number %d is a Prime number",n);
   }
    else
   {
       printf("The number %d is not a Prime number",n);
   }
   */
  /*
  PRIME NUMBER USING FUNCTION
   int n,flag = 0;
   printf("Enter a number\n");
   scanf("%d",&n);
   flag = is_prime_function(n);

   if (flag == 0)   
   {
       printf("The number %d is a Prime number",n);
   }
   else
   {
       printf("The number %d is not a Prime number",n);
   }
   */
   
}