// Comentario de actualizacion
#include <stdio.h>
#include <math.h>

double resolv( double a, double b, double c, int sel) {
	double r;
	
	if(sel==0)
		r=(-b+sqrt(b*b-4*a*c))/(2*a);
	else	
		r=(-b-sqrt(b*b-4*a*c))/(2*a);
	return r;
}
int main(void) {
	double a,b,c, r1, r2;
	
	printf("Ingrese a, b y c:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	r1=resolv(a,b,c,0);
	r2=resolv(a,b,c,1);
	
	printf("Raiz l: %lf\n", r1);
	printf("Raiz 2: %lf\n", r2);
	return 0;
}

