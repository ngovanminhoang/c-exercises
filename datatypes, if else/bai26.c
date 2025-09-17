#include <stdio.h>
//kiem tra tam giac chi tiet (thuong, vuong, can, deu)
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if ((a>0 && a<=1000000) &&
	   (b>0 && b<=1000000) &&
	   (c>0 && c<=1000000)){
	   	if(a+b>c && b+c>a && a+c>b){
	   		if((a==b && b!=c) || (b==c && c!=a) || (a==c && c!=b)) printf("%d", 2);
	   	    else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b) printf("%d", 3);
	   	    else if(a==b && b==c) printf("%d", 1);
	   	    else printf("%d", 4);
		   } else printf("NO");
	   }else printf("NO");
	

	return 0;
}