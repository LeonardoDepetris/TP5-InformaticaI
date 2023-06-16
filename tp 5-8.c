#include <stdio.h>
#include <math.h>

double distancia(float x2,float x1,float y2,float y1){
	double dist;
	dist= sqrt(pow(x2- x1, 2) + pow(y2 - y1, 2));
	return dist;
}
	int main(void){
		
		int x1, x2, y1, y2;
		printf("Ingrese las coordenadas del primer punto;\n");
		printf("X1: "); 
		scanf("%d", &x1);
		printf("Y1: "); 
		scanf("%d", &y1);
		
		
		printf("\nIngrese las coordenadas del segundo punto;\n");
		printf("X2: "); 
		scanf("%d", &x2);
		printf("Y2: "); 
		scanf("%d", &y2);
		
		
		printf("\nDistancia: %f\n", distancia(x1,x2,y1,y2));
		
		return 0;
	}
