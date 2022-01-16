#include <stdio.h>
int main()
{
    int i;
    scanf("%d", &i);
    int o=i%100;
    if(o==0){
        printf("%d",i+100);
    }else{
        printf("%d",(100-o)+i);
    }
}