#include <stdio.h>
 
int main(){
	int i;
  	scanf("%d",&i);
  	if(0<=i){
    	if(40<=i){
        	if(70<=i){
            	if(90<=i){
                	printf("expert");
                  	return 0;
                }
              printf("%d",90-i);
              return 0;
            }
          printf("%d",70-i);
          return 0;
        }
      printf("%d",40-i);
      return 0;
    }
}