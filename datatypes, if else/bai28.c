#include <stdio.h>
#include <math.h>

//phuong trinh bac hai

int main(){
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	
	if(a!=0){
		float delta = b*b-4*a*c;
		if(delta>0){
			float x1 = (-b+sqrt(delta))/(2*a);
			float x2 = (-b-sqrt(delta))/(2*a);
			printf("%.2f %.2f", x1, x2);
		}else if(delta==0) printf("%.2f", -b/2*a);
		else printf("vo nghiem");
	}else printf("%.2f", -c/b);



	return 0;
}