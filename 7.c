#include<string.h>
#include <stdio.h>
#define true 1 == 1
int main()
{
    while (true)
    {
        char buffer[10];
        char bucket[10];
        unsigned long long int a, b, c;
        scanf("%llu%llu", &a, &b);
        if (a == 0 && b == 0)
        {
            break;
        }
        c = a + b;
        sprintf(buffer, "%llu", c);
        int i, t =0, len;
 
        for (i = 0, len = strlen(buffer); i < len; i++)
        {
            if (buffer[i] != '0')
            {
                bucket[t] = buffer[i];
                t++;
            }
        }
        bucket[t] = '\0';
        printf("%s\n", bucket);
    }
    return 0;
}