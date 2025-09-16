// tinh toan gia tri bieu thuc

#include <stdio.h>
#include <math.h>
int main() {
	int x;
	scanf("%d", &x);
	if(x>0 && x<100000) printf("%d", x*x*x + 3*x*x + x + 1);
	else printf("x phai lon hon 0 va nho hon 10^5");
}