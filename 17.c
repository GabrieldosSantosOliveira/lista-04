#include <stdio.h>
#include <ctype.h>
#define N 100
#define isSpace(x) x == ' '
int ali(char *pc)
{
  int flag = 0;
  char first_letter = -1;
  int count_letter = 0;
  int ali = 0;
  while (*pc != '\0')
  {
    if (isSpace(*pc))
    {
      flag = 0;
    }
    else if (!(isSpace(*pc)) && flag == 0 && first_letter == -1)
    {
      first_letter = *pc;
      count_letter++;
      flag++;
    }
    else if (!(isSpace(*pc)) && flag == 0 && tolower(first_letter) == tolower(*pc))
    {
      count_letter++;
      flag++;
    }
    else if (!(isSpace(*pc)) && flag == 0 && tolower(first_letter) != tolower(*pc))
    {
      first_letter = *pc;
      count_letter = 1;
      flag++;
    }
    if (count_letter == 2 && flag == 0)
    {
      ali++;
    }
    pc++;
  }
  return ali;
}
int main()
{
  char word[N + 1];
  while (scanf("%[^\n]%*c", word) != EOF)
  {
    printf("%d\n", ali(word));
  }
 
  return 0;
}