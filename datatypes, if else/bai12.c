#include <stdio.h>
//tinh tong 5


int main(){
	
	long long n;
	scanf("%lld", &n);
	
	if(n>=1 && n<=100000000000000000){
		long long sum = 0;
		int sign = 1;
		for(long long i = 1; i<=n; i++){
			sign *= -1;
			sum += i*sign;
		}
	printf("%lld", sum);
	}
	
	return 0;
	
}