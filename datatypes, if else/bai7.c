#include <stdio.h>
#include <math.h>
// chuyen doi don vi do C va F

int main()
{   
    int c;
    scanf("%d", &c);
    if((c>0 && c<1000000)) printf("F=%.2f", c*((float)9/5) + 32);
    else printf("c khong hop le");
//    printf("%f", 24*((float)9/5)+32);
    return 0;
}
