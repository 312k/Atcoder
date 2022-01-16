#include <stdio.h>

int main()
{
    unsigned long N;
    unsigned long K;
    scanf("%ld", &N);
    scanf("%ld", &K);
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
    printf("%ld", N);
}