#include <stdio.h>
#include <string.h>
#define N 1000
 
int quantidade_de_leds(char *painel)
{
    int quantidade = 0;
    int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    while (*painel != '\0')
    {
        int digito = (*painel) - '0';
        quantidade += leds[digito];
        painel++;
    }
    return quantidade;
}
int main()
{
    char painel[N + 1];
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", painel);
        printf("%d leds\n", quantidade_de_leds(painel));
    }
 
    return 0;
}