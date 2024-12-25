#include <stdio.h>
#include <string.h>
#define N 12221 * 2
#define NUMBER 1000
void printArray(char *pi)
{
  while (*pi != '\0')
  {
    printf("%c", *pi);
    pi++;
  }
  printf("\n");
}
void reverse(char *pc)
{
  int i, len = strlen(pc);
  int k = len-1;
  int size = len * 2;
  for (i = len; i < size; i++, k--)
  {
    pc[i] = pc[k];
  }
  pc[i] = '\0';
}
int main()
{
  int i, n, j, k;
  char sequence[N + 1] = "";
 
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d%d", &j, &k);
    int i = 0, t;
    char buffer[NUMBER];
    for (t = j; t <= k; t++)
    {
      sprintf(buffer, "%d", t);
      strcat(sequence, buffer);
    }
    reverse(sequence);
    printArray(sequence);
    sequence[0] = '\0';
  }
  return 0;
}