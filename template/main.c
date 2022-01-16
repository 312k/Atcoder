#include <stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,fma,abm,mmx,avx,avx2")

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d,%d",a,b);
}