#include <stdio.h>
#define clear(x, size, counter)                \
  counter = 0;                                 \
  for (counter = 0; counter < size; counter++) \
  {                                            \
    x[counter] = 0;                            \
  }
#define readSize(k)  \
  do                 \
  {                  \
    scanf("%d", &k); \
  } while (k < 1 || k > 100)
#define N 1000
#define printSet(pi, n, counter)            \
  printf("(");                              \
  for (counter = 0; counter < n; counter++) \
  {                                         \
    if ((counter + 1) < n)                  \
    {                                       \
      printf("%d,", pi[counter]);           \
    }                                       \
    else                                    \
    {                                       \
      printf("%d", pi[counter]);            \
    }                                       \
  }                                         \
  printf(")\n")
 
void readSet(int size, int *set, int *tabela)
{
  int i = 0, k;
  while (i < size)
  {
    scanf("%d", &k);
    int index = tabela[k];
    if (index == 0)
    {
      tabela[k]++;
      set[i] = k;
      i++;
    }
  }
}
 
int difer(int sizeA, int *setA, int *setD, int *tabelaB)
{
 
  int i;
  int k = 0;
  for (i = 0; i < sizeA; i++)
  {
    int index = tabelaB[setA[i]];
    if (index == 0)
    {
      setD[k] = setA[i];
      k++;
    }
  }
  return k;
}
void cartesiano(int sizeA, int *setA, int sizeB, int *setB)
{
  int i, k;
  printf("(");
  for (i = 0; i < sizeA; i++)
  {
    for (k = 0; k < sizeB; k++)
    {
      if (k == (sizeB - 1) && i == (sizeA - 1))
      {
        printf("(%dx%d))\n", setA[i], setB[k]);
      }
      else
      {
        printf("(%dx%d),", setA[i], setB[k]);
      }
    }
  }
}
void printArray(int *pi, int n)
{
  int i = 0;
  for (i = 0; i < n; i++)
  {
    printf("%d: ", pi[i]);
  }
  printf("\n");
}
int tabelaA[N];
int tabelaB[N];
int main()
{
  int A[N], B[N], D[N];
  int e;
  int a;
  readSize(a);
  int b;
  readSize(b);
  readSet(a, A, tabelaA);
  readSet(b, B, tabelaB);
  int c;
  printSet(A, a, c);
  printSet(B, b, c);
  int d = difer(a, A, D, tabelaB);
  printSet(D, d, c);
  cartesiano(a, A, b, B);
  return 0;
}