#include <stdio.h>
 
int main()
{
    char i[1000];
    gets(i);
    for (int s = 0; s[i] != '\0'; s++)
    {
        if (s % 2 != 0)
        {
            if ((i[s] >= 'A') && (i[s] <= 'Z'))
            {
            }
            else
            {
                printf("No");
                return 0;
            }
        }
        else
        {
            if ((i[s] >= 'a') && (i[s] <= 'z'))
            {
            }
            else
            {
                printf("No");
                return 0;
            }
        }
    }
    printf("Y