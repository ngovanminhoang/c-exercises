#include <stdio.h>
//chuyen ki tu thuong thanh ki tu hoa


int main(){
//	
	char a;
	scanf("%c", &a);
	if(a>='A' && a<'Z') printf("%c", a+33);
	else if (a>='a' && a<'z') printf("%c", a+1);
	else if(a=='z' || a=='Z') printf("%c", 97);
	else printf("INVALID"); 

 	return 0;
	
}