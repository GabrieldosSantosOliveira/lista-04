#include <stdio.h>
#define N 1000
#define NOT_FOUND (-1)
int find(int *pi, int n, int searchValue)
{
  int i;
  for (i = 0; i < n; i++)
  {
    if (pi[i] == searchValue)
    {
      return i;
    }
  }
  return NOT_FOUND;
}
void printArray(int *pi, int n)
{
  int i = 0;
  for (i = 0; i < n; i++)
  {
    printf("%d\n", pi[i]);
  }
}
int main()
{
  int n, i;
  scanf("%d", &n);
  int set[N];
  int size = 0;
  for (i = 0; i < n; i++)
  {
    int k;
    scanf("%d", &k);
    int index = find(set, size, k);
    if (index == NOT_FOUND)
    {
      set[size] = k;
      size++;
    }
  }
  printArray(set, size);
  return 0;
}