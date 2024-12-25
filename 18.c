#include <stdio.h>
#define N 1000
int main()
{
  int n, k, i;
  scanf("%d%d", &n, &k);
 
  int horario[N];
  int presentes[N];
  int quantidade_presente = 0;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &horario[i]);
    if (horario[i] <= 0)
    {
      presentes[quantidade_presente] = i + 1;
      quantidade_presente++;
    }
  }
  if (quantidade_presente < k)
  {
    printf("SIM\n");
  }
  else
  {
    printf("NAO\n");
    int k;
    for (k = quantidade_presente - 1; k >= 0; k--)
    {
      printf("%d\n", presentes[k]);
    }
  }
 
  return 0;
}