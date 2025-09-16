#include <stdio.h>
//chuyen ki tu thuong thanh ki tu hoa


int main(){
//	
	char a;
	scanf("%c", &a);
	if(a>='a' && a<='z') printf("%c", a-32);
	else printf("%c", a);
	
 	return 0;
	
}