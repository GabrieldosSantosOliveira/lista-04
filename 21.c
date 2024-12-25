#include <stdio.h>
#include <ctype.h>
#define ALFABETO_N 25
#define N 200
#define isLowerCase(x) (x >= 'a' && x <= 'z')
#define isUpperCase(x) (x >= 'A' && x <= 'Z')
#define isLetter(x) (isLowerCase(x) || isUpperCase(x))
int alfabeto[ALFABETO_N];
void clear()
{
  int i = 0;
  for (i = 0; i < ALFABETO_N; i++)
  {
    alfabeto[i] = 0;
  }
}
int maior()
{
  int i, maior;
 
  for (i = 0; i < ALFABETO_N; i++)
  {
    if (i == 0)
    {
      maior = alfabeto[i];
    }
    else if (alfabeto[i] > maior)
    {
      maior = alfabeto[i];
    }
  }
  return maior;
}
int populate(char *pc)
{
  clear();
  while (*pc != '\0')
  {
    if (isLetter(*pc))
    {
      alfabeto[tolower(*pc) - 'a']++;
    }
    pc++;
  }
}
void printArray(int maior)
{
  int i = 0;
  for (i = 0; i < ALFABETO_N; i++)
  {
    if (alfabeto[i] == maior)
    {
      printf("%c", i + 'a');
    }
  }
  printf("\n");
}
int main()
{
  int n;
  scanf("%d%*c", &n);
  int i;
  char word[N + 1];
  for (i = 0; i < n; i++)
  {
    scanf("%[^\n]%*c", word);
    populate(word);
    printArray(maior(word));
  }
 
  return 0;
}