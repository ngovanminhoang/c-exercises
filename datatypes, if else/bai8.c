#include <stdio.h>
#include <math.h>
// tinh tong 1

int main()
{   
    int n;
    scanf("%d", &n);
    
    if(n>= 0 && n<=100000000){
    	long long sum = 0;
    	for(int i; i<=n; i++) sum += i;
        printf("%lld", sum);
	}
    
    return 0;

//     int n = 5000000050000000;
//     printf("%d", n);
}
