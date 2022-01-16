#include <stdio.h>
char S[1000001];
 
void swap(int a, int b)
{
    int tmp;
    tmp = S[a];
    S[a] = S[b];
    S[b] = tmp;
}
 
int main()
{
    int a, b;
    scanf("%d %d %s", &a, &b, S);
    a--;
    b--;
    while (1)
    {
        if (a >= b)
        {
            break;
        }
        swap(a, b);
        a++;
        b--;
    }
    printf("%s", S);
}