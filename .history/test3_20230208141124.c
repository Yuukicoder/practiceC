#include <stdio.h>
#include <ctype.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int main()
{

    char ch;
    int nVowels = 0;
    int nConsonants = 0;
    int nOthers = 0;
    printf("Enter a string of characters: ");
    ch = getchar();

    while (ch != '\n')
    {

        ch = toupper(ch);

        if (ch >= 'A' && ch <= 'Z')
        {

            switch (ch)
            {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':

                nVowels++;
                break;
            default:

                nConsonants++;
            }
        }
        else
        {
            nOthers++;
        }

        ch = getchar();
    }

    printf("Number of vowels: %d\n", nVowels);
    printf("Number of consonants: %d\n", nConsonants);
    printf("Number of other characters: %d\n", nOthers);

    return 0;
}
