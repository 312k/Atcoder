#include <stdio.h>
 
int main()
{
    char s[1000001];
    char a[1000001];
    scanf("%s %s", s, a);
    int i = 0;
    int chk = 0;
    int chkprev = 0;
    chk = s[0] - a[0];
    chkprev = chk;
    while (1)
    {
        if (s[i] == '\0')
        {
            break;
        }
        chk = s[i] - a[i];
        if (chk == chkprev)
        {
        }
        else
        {
            printf("No");
            return 0;
        }
        chkprev = chk;
        i++;
    }
    printf("Yes");
}