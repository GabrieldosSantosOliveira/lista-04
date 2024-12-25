#include <stdio.h>
#include <stdbool.h>
#define N 500
void bubble_sort(int *v, int n)
{
  int i = 0;
  int end = (n - 1);
  while (end >= 1)
  {
    bool flag = false;
    int k;
    for (k = 0; k < end; k++)
    {
      if (v[k + 1] < v[k])
      {
        int tmp = v[k];
        v[k] = v[k + 1];
        v[k + 1] = tmp;
        flag = true;
      }
    }
    end = end - 1;
    if (flag == false)
    {
      break;
    }
  }
}

void print_array(int *pi, int n)
{
  int i = 0;
  for (i = 0; i < n; i++)
  {
    printf("%d\n", pi[i]);
  }
}

int main()
{

  int n, k, i, j, len, j_flag = 1;
  int elementos[N * 2];
  scanf("%d%d", &n, &k);
  for (i = 0; i < n + k; i++)
  {
    scanf("%d", &elementos[i]);
  }
  bubble_sort(elementos, n + k);
  print_array(elementos, n + k);
  return 0;
}