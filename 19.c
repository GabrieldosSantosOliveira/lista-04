#include <stdio.h>
#define N 10000
int avance(char *a, char *b)
{
   int k = 0;
  while (*a != '\0')
  {
    if (*b >= *a)
    {
      k += *b - *a;
    }
    else
    {
      k += 'z' - *a;
      k += (*b - 'a') + 1;
    }
 
    a++;
    b++;
  }
  return k;
}
int main()
{
  int i, n;
  scanf("%d", &n);
  char a[N];
  char b[N];
  for (i = 0; i < n; i++)
  {
    scanf("%s%*c%s", a, b);
    printf("%d\n", avance(a, b));
  }
  return 0;
}