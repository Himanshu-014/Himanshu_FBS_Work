#include <stdio.h>

void check(char *temp);

void main()
{
    char temp = 'C';

    check(&temp);
}

void check(char *temp)
{
    if (*temp >= 'A' && *temp <= 'Z')
    {
        printf("Character is in Uppercase");
    }
    else
    {
        printf("Character is in Lowercase");
    }
}

