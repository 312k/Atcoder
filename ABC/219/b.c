#include <stdio.h>
 
int main(){
	char s1[20];
  	char s2[20];
  	char s3[20];
  	char T[1020]={'0'};
  	scanf("%s",s1);
    scanf("%s",s2);
  	scanf("%s",s3);
  	scanf("%s",T);
  	int i=0;
	while(T[i]!='\0'){
    	if(T[i]=='1'){
          printf("%s",s1);
        }
      	else if(T[i]=='2'){
          printf("%s",s2);
        }
      	else if(T[i]=='3'){
          printf("%s",s3);
        }
      i++;
    }
  printf("\n");
}