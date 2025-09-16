#include <stdio.h>
#include <math.h>
// tinh tong 4

int main()
{   
    int n;
    scanf("%d", &n);
    
    if(n>= 0 && n<=1000000000){
    	long long sum = 0;
    	for(long long i=0; i<=n; i++) sum += 2*i;
        printf("%lld", sum);
	}
    
    return 0;

}
