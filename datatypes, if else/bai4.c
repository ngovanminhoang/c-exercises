// tinh tong, hieu, tich, thuong

#include <stdio.h>
#include <math.h>

int main() {
	int a,b;
	scanf("%d%d", &a,&b);
	if(((a>-1000000000) && (a<1000000000)) && (((b>-1000000000) && (b<1000000000)) && (b!=0))){
		printf("Tong: %d, hieu: %d, tich: %lld, thuong: %.2f", a+b, a-b, (long long)a*b, (float)a/b);
	}
	else printf("a, b phai ...");
    return 0;
}