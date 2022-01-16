#include <stdio.h>
 
int main()
{
    int a, b, prev;
    prev = 0;
    int ans;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        if (prev < b)
        {
            ans = b;
        }
        else if (prev == b)
        {
            ans = b;
            break;
        }
        prev = b;
    }
    printf("%d", ans);
}