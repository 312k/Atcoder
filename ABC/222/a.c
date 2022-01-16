#include <stdio.h>
 
int main()
{
    int s;
    scanf("%d",&s);
    if(s>=10){
        if(s>=100){
            if(s>=1000){
                printf("%d",s);
                return 0;
            }
            printf("0%d",s);
            return 0;
        }
        printf("00%d",s);
        return 0;
    }
    else{
        printf("000%d",s);
    }
}