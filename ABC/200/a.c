#include <stdio.h>

int main()
{
    int i;
    scanf("%d", &i);
    if (i % 100 == 0)
    {
        printf("%d", i/100);
        return 0;
    }
    printf("%d", (i / 100) + 1);
}