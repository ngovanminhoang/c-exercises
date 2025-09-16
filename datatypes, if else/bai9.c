#include <stdio.h>
#include <math.h>
// tinh tong 2

int main()
{   
    int n;
    scanf("%d", &n);
    
    if(n>= 0 && n<=100000){
    	long long sum = 0;
    	for(long long i=0; i<=n; i++) sum += i*i;
        printf("%lld", sum);
	}
    
    return 0;

//     int n = 5000000050000000;
//     printf("%d", n);
}
