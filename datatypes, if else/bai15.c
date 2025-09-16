#include <stdio.h>
//so chia het cho 3 va 5


int main(){
//	
	long long a;
	scanf("%lld", &a);
	
	if(a>= -1000000000000000000 && a<= 1000000000000000000){
		if(a%3==0 && a%5==0) printf("%d", 1);
		else printf("%d", 0);
	}
	return 0;
	
}