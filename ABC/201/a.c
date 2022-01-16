#include <stdio.h>
 
int main(){
        int a;
        int b;
        int c;
 
        scanf("%d %d %d",&a,&b,&c);
        if(a>b){
                int tmp=a;
                a=b;
                b=tmp;
        }
        if(b>c){
                int tmp=b;
                b=c;
                c=tmp;
        }
        if(a>c){
                int tmp=a;
                a=c;
                c=tmp;
        }
        if((b-a)==(c-b)){
                printf("Yes");
        }else{
                printf("No");
        }
}