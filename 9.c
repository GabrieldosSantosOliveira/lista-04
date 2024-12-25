#include <stdio.h>
#include <string.h>
#define isLowerCase(x) (x >= 'a' && x <= 'z')
#define isUpperCase(x) (x >= 'A' && x <= 'Z')
#define isLetter(x) (isLowerCase(x) || isUpperCase(x))
#define PHRASE_N 10 * 10 * 10
int main()
{
    unsigned n, i;
    char word[PHRASE_N + 1];
    char reverse[PHRASE_N + 1];
    scanf("%u%*c", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%[^\n]%*c", word);
        int j, k, l, len = strlen(word);
        for (j = 0; j < len; j++)
        {
            if (isLetter(word[j]))
            {
                word[j] += 3;
            }
        }
        for (k = 0, l = len - 1; l >= 0; l--, k++)
        {
            reverse[k] = word[l];
        }
        for (j = 0; j < len; j++)
        {
            if ((j + 1) > (len / 2))
            {
                reverse[j] = reverse[j] - 1;
            }
        }
        reverse[k] = '\0';
        printf("%s\n", reverse);
    }
    return 0;
}