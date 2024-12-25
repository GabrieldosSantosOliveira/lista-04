#include <stdio.h>
#define N 128
#define POSITIVE 1;
#define NEGATIVE -1;
/**
 * Converte a string str para o valor inteiro correspondente.
 * @param str string contendo um número inteiro
 * @return o número inteiro correspondente
 */
long int string2int(const char *str)
{
  long int number = 0;
  int base = 10;
  char flag = POSITIVE;
  while (*str != '\0')
  {
    if (*str == '-')
    {
      flag = NEGATIVE;
      str++;
      continue;
    }
    number = number * base;
    number += *str - '0';
    str++;
  }
  return number * flag;
};
 
int main()
{
 
  char str[N + 1];
  while (scanf("%s", str) != EOF)
  {
    long int n = string2int(str);
    printf("%ld %ld\n", n, n * 2);
  }
  return 0;
}