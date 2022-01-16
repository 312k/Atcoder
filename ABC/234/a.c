#include <stdio.h>
#include <math.h>
int siki(int s)
{
    return s * s + 2 * s + 3;
}
int main()
{
    int a, tmp, b;
    scanf("%d", &a);
    tmp = a;
    a = siki(a);
 
    a = a + tmp;
 
    a = siki(a);
 
    b = siki(tmp);
    b = siki(b);
    a = a + b;
    a = siki(a);
    printf("%d", a);
}