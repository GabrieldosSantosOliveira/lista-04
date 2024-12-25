#include <stdio.h>
#define N 1000
int quantidade_maior_ou_igual(int valor, int *pi, int n)
{
    int i, k = 0;
    for (i = 0; i < n; i++)
    {
        if (pi[i] >= valor)
        {
            k++;
        }
    }
    return k;
}
int main()
{
    int v[N];
    int n, k;
    do
    {
        scanf("%d", &n);
    } while (n <= 0);
    int i;
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &v[i]);
    }
    scanf("%d", &k);
    printf("%d\n", quantidade_maior_ou_igual(k, v, n));
    return 0;
}