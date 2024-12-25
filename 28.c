#include <stdio.h>
#include <stdbool.h>
#define N 128
#define POSITIVE 1
#define NEGATIVE -1
/**
 * Converte a string str para o valor real correspondente.
 * @param str string contendo um número real
 * @return o número inteiro correspondente
 */
double string2double(const char *str)
{
  int flag = POSITIVE;
  bool flag_point = false;
  double n = 0;
  double parte = 10.0;
  while (*str != '\0')
  {
 
    if (*str == '-')
    {
      flag = NEGATIVE;
      str++;
      continue;
    }
    else if (*str == '.')
    {
      flag_point = true;
      str++;
      continue;
    }
 
    if (flag_point == false)
    {
      n = n * 10;
      n += *str - '0';
    }
    else
    {
      n += (*str - '0') / parte;
      parte = parte * 10;
    }
 
    str++;
  }
  return n * flag;
}
 
int main()
{
  char str[N + 1];
  while ((scanf("%s", str) != EOF))
  {
    double n = string2double(str);
    printf("%.3lf %.3lf\n", n, n + n);
  }
  return 0;
}