#include <string.h>
#include <stdio.h>
#define N 10000
 
void palavras(char *frase, int *letras, int *consoantes, int *vogais)
{
    int i = 0, len = strlen(frase);
    *letras = 0;
    *consoantes = 0;
    *vogais = 0;
    for (i = 0; i < len; i++)
    {
        if ((frase[i] >= 'a' && frase[i] <= 'z') || (frase[i] >= 'A' && frase[i] <= 'Z'))
        {
            *letras += 1;
            if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
            {
                *vogais += 1;
            }
            else if (frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')
            {
                *vogais += 1;
            }
            else
            {
                *consoantes += 1;
            }
        }
    }
}
 
int main()
{
    char vet[N+1];
    int n, i, letras, consoantes, vogais;
    scanf("%d%*c", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%[^\n]%*c", vet);
        palavras(vet, &letras, &consoantes, &vogais);
        printf("Letras = %d\n", letras);
        printf("Vogais = %d\n", vogais);
        printf("Consoantes = %d\n", consoantes);
    }
    return 0;
}