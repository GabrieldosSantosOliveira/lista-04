#include <stdio.h>
#include <stdbool.h>
#define QUINA 5
#define QUADRA 4
#define SENA 6
#define numeroFoiSorteado(x) (numeros_sorteados[x])
int numeros_sorteados[59];
 
int ler_tentativa()
{
    int i, k, acerto = 0;
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &k);
        if (numeroFoiSorteado(k))
        {
            acerto++;
        }
    }
    return acerto;
}
 
int main()
{
    int i, k, n, quina = 0, quadra = 0, sena = 0;
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &k);
        numeros_sorteados[k]++;
    }
    scanf("%d", &n);
    while (n--)
    {
        int quantidade_de_acertos = ler_tentativa();
        if (quantidade_de_acertos == QUINA)
        {
            quina++;
        }
        else if (quantidade_de_acertos == QUADRA)
        {
            quadra++;
        }
        else if (quantidade_de_acertos == SENA)
        {
            sena++;
        }
    }
    if (sena == 0)
    {
        printf("Nao houve acertador para sena\n");
    }
    else
    {
        printf("Houve %d acertador(es) da sena\n", sena);
    }
 if (quina == 0)
    {
        printf("Nao houve acertador para quina\n");
    }
    else
    {
        printf("Houve %d acertador(es) da quina\n", quina);
    }
    if (quadra == 0)
    {
        printf("Nao houve acertador para quadra\n");
    }
    else
    {
        printf("Houve %d acertador(es) da quadra\n", quadra);
    }
    return 0;
}