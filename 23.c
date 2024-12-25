#include <stdio.h>
#include <ctype.h>
#define N 50
#define isNotSpace(x) x != ' '
#define switchFlag(x)      \
  if (x == MAIUSCULO)      \
  {                        \
    x = MINUSCULO;         \
  }                        \
  else if (x == MINUSCULO) \
  {                        \
    x = MAIUSCULO;         \
  }
#define MINUSCULO 0
#define MAIUSCULO 1
void toDance(char *pc)
{
  char flag = MAIUSCULO;
  while (*pc != '\0')
  {
    if (isNotSpace(*pc) && flag == MAIUSCULO)
    {
      *pc = toupper(*pc);
      switchFlag(flag);
    }
    else if (isNotSpace(*pc) && flag == MINUSCULO)
    {
      *pc = tolower(*pc);
      switchFlag(flag);
    }
 
    pc++;
  }
}
int main()
{
  char word[N + 1];
  while (scanf("%[^\n]%*c", word) != EOF)
  {
    toDance(word);
    printf("%s\n", word);
  }
  return 0;
}