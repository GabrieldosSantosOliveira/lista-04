#include <stdio.h>
#define true 1 == 1
#define N 10000
unsigned int num(unsigned int *pi, unsigned int n, unsigned int value)
{
  int i, count = 0;
  for (i = 0; i < n; i++)
  {
    if (pi[i] <= value)
    {
      count++;
    }
  }
  return count;
}
void print_list(unsigned int *pi, unsigned int n, unsigned int maior)
{
  int i;
  for (i = 0; i <= maior; i++)
  {
    printf("(%u) %u\n", i, num(pi, n, i));
  }
}
int main()
{
  unsigned int v[N];
  while (true)
  {
    unsigned int n;
    scanf("%d", &n);
    if (n == 0)
    {
      break;
    }
    int i, maior;
    for (i = 0; i < n; i++)
    {
      scanf("%d", &v[i]);
      if (i == 0)
      {
        maior = v[i];
      }
      else if (v[i] > maior)
      {
        maior = v[i];
      }
    }
    print_list(v, n, maior);
  }
  return 0;
}