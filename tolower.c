#include <ctype.h>
#include <stdio.h>

int main() 
{
    char uppercaseChar = 'A';
    char lowercaseChar = tolower(uppercaseChar);

    printf("Original: %c, Lowercase: %c\n", uppercaseChar, lowercaseChar);

    return 0;
}