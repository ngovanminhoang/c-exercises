#include <stdio.h>
//kiem tra tam giac

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if ((a>0 && a<=1000000) &&
	   (b>0 && b<=1000000) &&
	   (c>0 && c<=1000000)){
	   	if(c<=a+b && a-b<c && a-b>-c) printf("YES");
	   	else printf("NO");
	   }
	else printf("NO");



	return 0;
}