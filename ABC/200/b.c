#include <stdio.h>

int main()
{
    unsigned long int N;
    unsigned long int K;
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