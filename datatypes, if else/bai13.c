#include <stdio.h>
//so chia het lon nhat


int main(){
	
	int a, b;
	scanf("%d%d", &a, &b);
	
	if((a>=1 && a<=100000000) && (b>=1 && b<=100000000))
	  printf("%d", (a/b)*b);
	return 0;
	
}