#include <stdio.h>
//kiem tra chu cai


int main(){
//	
	char a;
	scanf("%c", &a);
	if(a>='A' && a<='Z' || a>='a' && a<='z') printf("YES");
	else printf("NO");
	
 	return 0;
	
}