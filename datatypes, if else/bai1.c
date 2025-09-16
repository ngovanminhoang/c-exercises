// tim phan nguyen, du

#include <stdio.h>
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	if(b!=0) printf("phan nguyen:%d, phan du:%d", a/b, a%b);
	else printf("b phai khac khong");
}