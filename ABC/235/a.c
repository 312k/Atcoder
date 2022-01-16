#include <stdio.h>
 
int main()
{
    char a[4];
    int ans = 0;
    scanf("%s", a);
    a[0] = a[0] - 48;
    a[1] = a[1] - 48;
    a[2] = a[2] - 48;
    ans = a[0] * 100 + a[1] * 10 + a[2];
    ans += a[1] * 100 + a[2] * 10 + a[0];
    ans += a[2] * 100 + a[0] * 10 + a[1];
    printf("%d", ans);
}