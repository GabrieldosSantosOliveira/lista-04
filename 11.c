#include <stdio.h>
 
int main()
{
    int num[100];
    int i;
    for (i = 0; i < 100; i++)
    {
        num[i] = 0;
    }
    unsigned long long int n;
    scanf("%llu", &n);
    unsigned int k;
    for (i = 0; i < n; i++)
    {
 
        scanf("%u", &k);
        num[k]++;
    }
    int maior, indice_maior;
    for (i = 0; i < 100; i++)
    {
 
        if (i == 0)
        {
            maior = num[i];
            indice_maior = i;
        }
        else if (num[i] > maior)
        {
            maior = num[i];
            indice_maior = i;
        }
    }
    printf("%u\n", indice_maior);
    printf("%u\n", maior);
    return 0;
}