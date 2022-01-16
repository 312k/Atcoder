#include <stdio.h>
 
int main()
{
    char s[5];
    scanf("%s", s);
    int a = s[0];
    int b = s[2];
    a = a - 48;
    b = b - 48;
    printf("%d", a * b);
}