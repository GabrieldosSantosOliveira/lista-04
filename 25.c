#include <stdio.h>
#include <string.h>
#define DEMILITER 0
#define NOT_DEMILITER 1
#define N 2048
#define isDelimiter(x) (x == ' ' || x == '.' || x == ',' || x == '!' || x == '?' || x == '(' || x == ')' || x == '[' || x == ']' || x == '{' || x == '}')
 
void split(char *src, char *dest, int beginIndex, int endIndex)
{
  int i, k = 0;
  for (i = beginIndex; i < endIndex + 1; i++, k++)
  {
    dest[k] = src[i];
  }
  dest[k] = '\0';
}
 
 
int frequencia(char *word, char *searchValue)
{
  char previous_phrase[N + 1];
  char phrase[N + 1];
  int i, len = strlen(word);
  int previous = DEMILITER;
  int begin = 0;
  int end = -1;
  int quantidade = 0;
  for (i = 0; i < len; i++)
  {
    if ((isDelimiter(word[i]) && previous == NOT_DEMILITER))
    {
      end = i - 1;
      split(word, phrase, begin, end);
      if (strcmp(searchValue, phrase) == 0)
      {
        quantidade++;
      }
      previous = DEMILITER;
    }
    else if (i == (len - 1) && previous == NOT_DEMILITER)
    {
      end = i;
      split(word, phrase, begin, end);
      if (strcmp(searchValue, phrase) == 0)
      {
        quantidade++;
      }
    }
    else if (!isDelimiter(word[i]) && i == (len - 1) && previous == DEMILITER)
    {
      end = i;
      begin = i;
      split(word, phrase, begin, end);
      if (strcmp(searchValue, phrase) == 0)
      {
        quantidade++;
      }
    }
    else if (!isDelimiter(word[i]) && previous == DEMILITER)
    {
      begin = i;
      previous = NOT_DEMILITER;
    }
  }
  return quantidade;
}
 
int main()
{
  char previous_phrase[N + 1];
  char phrase[N + 1];
  char word[N + 1];
  int index = 0;
  scanf("%[^\n]%*c", word);
  int i, len = strlen(word);
  int previous = DEMILITER;
  int begin = 0;
  int end = -1;
  for (i = 0; i < len; i++)
  {
    if ((isDelimiter(word[i]) && previous == NOT_DEMILITER))
    {
      end = i - 1;
      split(word, phrase, begin, end);
      if (strcmp(previous_phrase, phrase) != 0)
      {
        printf("(%s)%d\n", phrase, frequencia(word, phrase));
      }
      previous = DEMILITER;
      strcpy(previous_phrase, phrase);
    }
    else if (i == (len - 1) && previous == NOT_DEMILITER)
    {
      end = i;
      split(word, phrase, begin, end);
      printf("(%s)%d\n", phrase, frequencia(word, phrase));
    }
    else if (!isDelimiter(word[i]) && i == (len - 1) && previous == DEMILITER)
    {
      end = i;
      begin = i;
      split(word, phrase, begin, end);
      printf("(%s)%d\n", phrase, frequencia(word, phrase));
    }
    else if (!isDelimiter(word[i]) && previous == DEMILITER)
    {
      begin = i;
      previous = NOT_DEMILITER;
    }
  }
 
  return 0;
}