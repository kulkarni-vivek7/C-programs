// A character is a vowel or consonant
#include<stdio.h>
void main()
{
    char character;
    printf("Enter a character\n");
    scanf("%c",&character);

    if(character == 'a' || character == 'A' || character == 'e' || character == 'E' 
    || character == 'i' || character == 'I' || character == 'o' || character == 'O' 
    || character == 'u' || character == 'U')
    {
        printf("The character %c is Vowel",character);
    }
    else
    {
        printf("The character %c is Consonent",character);
    }
}