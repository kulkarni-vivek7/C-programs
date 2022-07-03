#include<stdio.h>
#include<math.h>

int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
void main()
{
    /* 
    FACTORIAL OF A NUMBER USING 'tgamma' function which is present in math.h headerfile
    int n,fact;
    printf("Enter a number\n");
    scanf("%d",&n);

    fact = tgamma(n + 1);
    printf("The Factorial of %d is %d",n,fact);
    */

   /*
    FACTORIAL OF A NUMBER USING LOOP CONCEPT
   int n,fact = 1,i;
   printf("Enter a number\n");
   scanf("%d",&n);
   if(n == 0 || n == 1)
   {
       return 1;
   }
   else if(n < 0)
   {
       printf("Invalid Output!!");
   }
   else
   {
      for(i = 1;i <= n;i++)
      {
          fact = fact * i;
      }
    }  

   printf("The factorial of %d is %d",n,fact);
   */

  /*
   FACTORIAL OF A NUMBER USING LOOP CONCEPT
   int n, fact;
   printf("Enter a number\n");
   scanf("%d",&n);
   
   fact = factorial(n);
   printf("The factorial of %d is %d",n,fact);
   */
}