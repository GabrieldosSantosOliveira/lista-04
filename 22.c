#include <stdio.h>
#include <string.h>
#define N 256
#define ALFABETO_N 127
#define isLowerCase(x) (x >= 'a' && x <= 'z')
#define isUpperCase(x) (x >= 'A' && x <= 'Z')
#define isLetter(x) (isLowerCase(x) || isUpperCase(x))
char tabela[ALFABETO_N];
int populate(char *pc)
{
  while (*pc != '\0')
  {
 
    tabela[*pc]++;
    pc++;
  }
}
void str_clean(char *str, char *clr)
{
  char str_clean[N];
  int i = 0, k = 0;
  populate(clr);
 
  while (str[k] != '\0')
  {
    if (tabela[str[k]] == 0)
    {
      str_clean[i] = str[k];
      i++;
    }
    k++;
  }
  strcpy(str, str_clean);
}
int main()
{
  char str[N]; // string original
  char clr[N]; // lista de caracteres indesejados
  scanf("%[^\n]%*c", str);
  scanf("%[^\n]%*c", clr);
  str_clean(str, clr);
  printf("%s\n", str);
  return 0;
}