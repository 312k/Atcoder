#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int UP = b / c;
    int DOWN = a / c;
    int check;
    for (int i = 0; i < (UP - DOWN); i++)
    {
        check = c * i;
        if (check >= a && check <= b)
        {
            printf("%d", check);
            return 0;
        }
    }
    printf("-1");
}