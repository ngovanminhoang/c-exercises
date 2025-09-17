#include <stdio.h>
//ket qua hoc tap

int  main(){
	float a, b, c, d;
	scanf("%f%f%f%f", &a,&b,&c,&d);
	
	float mean = (a+b+(c*2)+(d*3))/7;
	if(mean>=8) printf("GIOI");
	else if(mean>=6.5 && mean<8) printf("KHA");
	else if(mean>=5 && mean<6.5) printf("TRUNG BINH");
	else printf("YEU");
//   


	return 0;
}