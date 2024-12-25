#include <stdio.h>
#include <stdbool.h>
#define N 100000
 
bool checar(int valor, int *pi, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (*(pi + i) == valor)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int v[N];
    int i, n, g, t;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    scanf("%d", &g);
    for (i = 0; i < g; i++)
    {
        scanf("%d", &t);
        bool existe = checar(t, v, n);
        if (existe == true)
        {
            printf("ACHEI\n");
        }
        else if (existe == false)
        {
            printf("NAO ACHEI\n");
        }
    }
    return 0;
}