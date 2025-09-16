// tinh khoang cach euclid giua 2 diem trong he toa do oxy

#include <stdio.h>
#include <math.h>

int main() {
	int x1, y1, x2, y2;
	scanf("%d%d%d%d", &x1, &x2, &y1, &y2);
	if(((x1>=-1000000) && (x1<=1000000)) && ((y1>=-1000000) && (y1<=1000000)) && ((x2>=-1000000) && (x2<=1000000)) && ((y2>=-1000000) && (y2<=1000000))){
		printf("%.2f", sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1))));
	}else printf("khong thoa dieu kien");
	
	
	return 0;
}