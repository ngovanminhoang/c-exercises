// tinh chu vi, dien tich hinh tron

#include <stdio.h>
#include <math.h>

int main() {
	long long r;
	float pi = M_PI;
	scanf("%d", &r);
	if(r>=1 && r<= 1000000) printf("chu vi:%.2f, dien tich:%.2f", 2*pi*r, pi*r*r);
	else printf("r phai hop le");
}