#include <stdio.h>
 
int main()
{
   int array[100], search, i, n, count = 0;
   
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
   
   printf("Enter %d numbers\n", n);
   
   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);
     
   printf("Enter a number to search\n");
   scanf("%d", &search);
   
   for (i = 0; i < n; i++) {
      if (array[i] == search) {
         printf("%d is present at location %d.\n", search, i+1);
         count++;
      }
   }
   if (count == 0)
      printf("%d isn't present in the array.\n", search);
   else
      printf("%d is present %d times in the array.\n", search, count);
     
   return 0;
}