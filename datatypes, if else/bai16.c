#include <stdio.h>
//kiem tra nam nhuan


int main(){
	
	int a;
	scanf("%d", &a);
	
	if(a> 0 && a<= 1000000){
		if(a%4==0 && a%100!=0) printf("YES");
		else printf("NO");
	}else printf("INVALID");

 	return 0;
	
}