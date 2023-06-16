#include <stdio.h>
#include <math.h>
float restot(float R1, float R2, float R3){
float restot;
restot=(1/((1/R1)+(1/R2)+(1/R3)));
return restot;
}
int main() {
float R1, R2, R3;
	printf("ingrese R1:\n");
	scanf("%f",&R1);
	printf("ingrese R2:\n");
	scanf("%f",&R2);
	printf("ingrese R3:\n");
	scanf("%f",&R3);
	
	printf("El resultado es: %lf\n", restot(R1,R2,R3));
	
	return 0;
}

