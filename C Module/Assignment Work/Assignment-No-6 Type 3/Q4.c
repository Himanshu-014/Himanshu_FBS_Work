#include <stdio.h>

void check(char);

void main()
{
    char temp = 'X';
    check(temp);
}

void check(char temp)
{
    if (temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u' ||
        temp == 'A' || temp == 'E' || temp == 'I' || temp == 'O' || temp == 'U')
    {
        printf("Character is Vowel");
    }
    else
    {
        printf("Character is Consonant");
    }
}

