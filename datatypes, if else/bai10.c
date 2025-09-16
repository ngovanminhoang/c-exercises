#include <stdio.h>
#include <math.h>
// tinh tong 3

int main()
{   
    int n;
    scanf("%d", &n);
    
    if(n>= 0 && n<=1000000000){
    	float sum = 0;
    	for(long long i=1; i<=n; i++) sum += 1/(float)(i*(i+1));
        printf("%.2f", sum);
	}
    
    return 0;

}
