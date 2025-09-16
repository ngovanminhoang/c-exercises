#include <stdio.h>
//so chia het lon nhat


int main(){
	
	int a, b;
	scanf("%d%d", &a, &b);
	
	if((a>=1 && a<=100000000) && (b>=1 && b<=100000000)){
		if(a%b==0) printf("%d", (a/b)*b);
		else printf("%d", ((a/b)+1)*b);
	}
	return 0;
	
}