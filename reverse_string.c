#include<stdio.h>
#include<string.h>
int main()
{
    int i, j = 0;
    char str1[100], str2[100];
    printf("Enter a string to get the reverse string: ");
    gets(str1);
    for(i = strlen(str1)-1;i>=0;i--)
    {
        str2[j] = str1[i];
        j++;
    }
    printf("\nThe Reverse of string [%s] is [%s]\n",str1,str2);
    return 0;
}