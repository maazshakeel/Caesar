// including libraries
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Ensuring to user to ran the program with two words at the prompt
    if (argc != 2)
    {
        printf("Usage: ./ceaser key\n");
        return 1;
    }
    // Ensuring the user to ran the program with two words but the second word must be an integer
    for (int i = 0, s = strlen(argv[1]); i < s; i++)
    {
        if (isalpha(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    // Key
    int key = atoi(argv[1]);
    // Getting plaintext
    string text = get_string("plaintext:  ");
    // Defining a variable that will store the cipher
    char cipher = 'A';
    printf("ciphertext: ");
    // Converting plaintext into cipher
    for (int i = 0, s = strlen(text); i < s; i++)
    {
        // Checking if the user type the plain text at the ith index is greater than or equal to (BIG ABC) A and less than or equal to (BIG ABC) Z
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            // Then convert the plain text into cipher
            cipher = (((text[i] - 64) + key) % 26) + 64;
            // printing the cipher text
            printf("%c", cipher);
        }
        // Checking if the user type the plain text at the ith index is greater than or equal to (SMALL ABC) a and less than or equal to (SMALL ABC) z
        else if (text[i] >= 'a' && text[i] <= 'z')
        {
            // Then convert the plain text into cipher
            cipher = (((text[i] - 97) + key) % 26) + 97;
            // printing the cipher text
            printf("%c", cipher);
        }
        // Else if the the user's plain text at ith value does'nt match any of the above cases then print the user's plain text at the ith value as it is;
        else
        {
            // Printing the plain text at the ith value as it is;
            printf("%c", text[i]);
        }
    }
    // Printing a new line
    printf("\n");
}
