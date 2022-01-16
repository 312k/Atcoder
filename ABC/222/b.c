#include <stdio.h>
 
int main()
{
    int N,P;
    scanf("%d",&N);
    scanf("%d",&P);
    int s;
    int cnt=0;
    for(int i=0;i<N;i++){
        scanf("%d",&s);
        if(s<P){
            cnt++;
        }
    }
    printf("%d",cnt);
}