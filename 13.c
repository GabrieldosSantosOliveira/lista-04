#include <stdio.h>
#define N 499
int main()
{
  int n, i, k;
  char word[N + 1];
  scanf("%d%*c", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d%*c%[^\n]%*c", &k, word);
    word[k] = '\0';
    printf("%s\n", word);
  }
  return 0;
}