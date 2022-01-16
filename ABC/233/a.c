#include <stdio.h>
 
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int cnt = 0;
    if (a >= b)
    {
        printf("%d", cnt);
        return 0;
    }
    while (1)
    {
        cnt++;
        b -= 10;
        if (a >= b)
        {
            printf("%d", cnt);
            return 0;
        }
    }
}