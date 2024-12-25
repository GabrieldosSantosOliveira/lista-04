#include <stdio.h>
#include <string.h>
#define N 32
 
int main()
{
    int n;
    char vet[N + 1];
    char reverse[N + 1];
    while (scanf("%d", &n) != EOF)
    {
        int k = 0;
        if (n == 0)
        {
            printf("0\n");
            continue;
        }
        while (n > 0)
        {
            vet[k] = (n % 2) + 48;
            n = n / 2;
            k++;
        }
        vet[k] = '\0';
        int j,f , len = strlen(vet);
        for(j =0, f = len -1; f >= 0; j++, f--){
            reverse[j] = vet[f];
        }
        reverse[j] = '\0';
        printf("%s\n", reverse);
    }
    return 0;
}