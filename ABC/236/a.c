#include <stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,fma,abm,mmx,avx,avx2")

int main()
{
    char s[11];
    int a, b;
    scanf("%s", s);
    scanf("%d %d", &a, &b);
    char k;
    k = s[a - 1];
    s[a - 1] = s[b - 1];
    s[b - 1] = k;
    printf("%s", s);
}