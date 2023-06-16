#include <stdio.h>
#include <math.h>

float distancia(int x1,int x2,int y1,int y2,int z1, int z2){
float distancia;
distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
return distancia;

}
int main()
{
	int x1, x2, y1, y2,z1,z2;
	printf("Ingrese las coordenadas del primer punto;\n");
	printf("X1: "); 
	scanf("%d", &x1);
	printf("Y1: "); 
	scanf("%d", &y1);
	printf("Z1: "); 
	scanf("%d", &z1);
	
	printf("\nIngrese las coordenadas del segundo punto;\n");
	printf("X2: "); 
	scanf("%d", &x2);
	printf("Y2: "); 
	scanf("%d", &y2);
	printf("Z2: "); 
	scanf("%d", &z2);
	
	printf("\nDistancia: %f\n", distancia(x1,x2,y1,y2,z1,z2));
	
	return 0;
}
