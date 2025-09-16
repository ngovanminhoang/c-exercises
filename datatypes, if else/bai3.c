// tinh toan gia tri bieu thuc 2

#include <stdio.h>
#include <math.h>

int main() {
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	if(((a>-1000000000 && a<0) || (a>0 && a<1000000000)) &&
	   ((b>-1000000000 && b<0) || (b>0 && b<1000000000)) &&
	   ((c>-1000000000 && c<0) || (c>0 && c<1000000000))) printf("S=%d", a*(b+c)+b*(a+c));
	else printf("x phai ...");
    
}