#include <stdio.h>
//in ra so ngay cua thang


int main(){
	
	int t, n;
	scanf("%d %d", &t, &n);
	
	if((t>=1 && t<= 12) && (n>0 && n<=1000000)){
		if(t==1||t==3||t==5||t==7||t==8||t==10||t==12) printf("31");
		else if(t==4||t==6||t==9||t==11) printf("30");
		else printf("28 hoac 29");
	}else printf("INVALID");

 	return 0;
	
}