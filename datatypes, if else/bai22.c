#include <stdio.h>
//chuyen ki tu hoa thanh ki tu thuong


int main(){
//	
	char a;
	scanf("%c", &a);
	if(a>='A' && a<='Z') printf("%c", a+32);
	else printf("%c", a);
	
 	return 0;
	
}