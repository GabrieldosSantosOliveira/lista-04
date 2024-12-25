#include <stdio.h>
#define N 1000000
#define isPair(x) ((x % 2) == 0)
void sort(int *pi, int n)
{
  int i = 0;
  for (i = 0; i < n - 1; i++)
  {
    int j = 0, menor, menor_index;
    for (j = i; j < n; j++)
    {
      if (j == i)
      {
        menor = pi[j];
        menor_index = j;
      }
      else if (pi[j] < menor)
      {
        menor = pi[j];
        menor_index = j;
      }
    }
    int tmp = pi[i];
    pi[i] = pi[menor_index];
    pi[menor_index] = tmp;
  }
}
double mediana(int *pi, int n)
{
  if (isPair(n))
  {
    return (pi[((n) / 2) - 1] + pi[((n) / 2)]) / 2.0;
  }
  return (double)pi[((n + 1) / 2) - 1];
}
void printArray(int *pi, int n)
{
  int i = 0;
  for (i = 0; i < n; i++)
  {
    printf("%d: ", pi[i]);
  }
  printf("\n");
}
int main()
{
  int i, n, numbers[N];
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &numbers[i]);
  }
  sort(numbers, n);
  
  printf("%.2lf\n", mediana(numbers, n));
  return 0;
}