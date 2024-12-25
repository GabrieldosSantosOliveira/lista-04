#include <stdio.h>
#define N 1000
int main()
{
    int v[N];
    int n, quantidade_de_pares = 0;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < n; i++)
    {
        if ((v[i] % 2) == 0)
        {
            quantidade_de_pares++;
            printf("%d ", v[i]);
        }
    }
    printf("%d\n", quantidade_de_pares);
    return 0;
}