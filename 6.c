#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#define N 10
bool one(char *str)
{
    char one[4] = "one";
    int len = strlen(str);
    if (len != 3)
    {
        return false;
    }
    int i, t = 0;
    for (i = 0; i < 3; i++)
    {
        if (one[i] == str[i])
        {
            t++;
        }
    }
    if (t >= 2)
    {
        return true;
    }
    return false;
}
bool two(char *str)
{
    char two[4] = "two";
    int len = strlen(str);
    if (len != 3)
    {
        return false;
    }
    int i, t = 0;
    for (i = 0; i < 3; i++)
    {
        if (two[i] == str[i])
        {
            t++;
        }
    }
    if (t >= 2)
    {
        return true;
    }
    return false;
}
bool three(char *str)
{
    char three[7] = "three";
    int len = strlen(str);
    if (len != 5)
    {
        return false;
    }
    int i, t = 0;
    for (i = 0; i < 5; i++)
    {
        if (three[i] == str[i])
        {
            t++;
        }
    }
    if (t >= 4)
    {
        return true;
    }
    return false;
}
int main()
{
    int i, n;
    char vet[N + 1];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", vet);
        if (one(vet) == true)
        {
            printf("1\n");
        }
        else if (two(vet) == true)
        {
            printf("2\n");
        }
        else if (three(vet) == true)
        {
            printf("3\n");
        }
    }
    return 0;
}