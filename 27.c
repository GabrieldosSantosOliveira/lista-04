#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define ANOES_QUANTIDADE 9
void bubble_sort(int *v, int n)
{
  int i = 0;
  int end = (n - 1);
  while (end >= 1)
  {
    bool flag = false;
    int k;
    for (k = 0; k < end; k++)
    {
      if (v[k + 1] < v[k])
      {
        int tmp = v[k];
        v[k] = v[k + 1];
        v[k + 1] = tmp;
        flag = true;
      }
    }
    end = end - 1;
    if (flag == false)
    {
      break;
    }
  }
}
int main()
{
  int n;
  scanf("%d", &n);
  while (n--)
  {
    int anoes[ANOES_QUANTIDADE];
    int lista[7];
    int i;
    for (i = 0; i < ANOES_QUANTIDADE; i++)
    {
      scanf("%d", &anoes[i]);
    }
    int p, f, x, z, k;
    for (p = 0; p < (ANOES_QUANTIDADE - 1); p++)
    {
      for (f = (p + 1); f < ANOES_QUANTIDADE; f++)
      {
        int soma = 0;
        for (x = 0; x < ANOES_QUANTIDADE; x++)
        {
          if (x != f && x != p)
          {
            soma += anoes[x];
          }
        }
        if (soma == 100)
        {
          int n = 0;
          z = 0;
          while (z < 9)
          {
            if (z != f && z != p)
            {
              lista[n] = anoes[z];
              n++;
            }
            z++;
          }
        }
      }
    }
    bubble_sort(lista, 7);
    for (k = 0; k < 7; k++)
    {
      printf("%d\n", lista[k]);
    }
  }
  return 0;
}