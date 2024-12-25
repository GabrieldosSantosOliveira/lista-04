#include <stdio.h>
#define N 499
int findch(char *pc, char searchValue)
{
  int i = 0;
  while ((pc[i] != '\0') && (pc[i] != searchValue))
  {
    i++;
  }
  if (pc[i] == searchValue)
  {
    return i;
  }
  return -1;
}
int main()
{
  int i, n;
  char k, word[N + 1];
  scanf("%d%*c", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%c%*c%[^\n]%*c", &k, word);
    int index = findch(word, k);
    if (index == -1)
    {
      printf("Caractere %c nao encontrado.\n", k);
    }
    else
    {
      printf("Caractere %c encontrado no indice %d da string.\n", k, index);
    }
  }
  return 0;
}