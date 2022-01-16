#include <stdio.h>

int main()
{
    unsigned long N;
    unsigned long K;
    scanf("%d", &N);
    scanf("%d", &K);
    for (int i = 0; i < K; i++)
    {
        if (N % 200 == 0)
        {
            N /= 200;
            continue;
        }
        else
        {
            N = N * 1000 + 200;
            continue;
        }
    }
    printf("%d", N);
}