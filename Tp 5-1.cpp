#include <stdio.h>

double potencia (double base, int exp) {
	int k;
	double pot=1.0;
		
	for(k=0;k<exp; k++){
			pot=pot*base;	
	}
    return pot;
}
	
int main(void){
	
	double numero;
	int exponente;
		
	printf("Ingrese un numero y el exponente a elevar:\n");
	scanf("%lf %d", &numero, &exponente);
		
	printf("el resultado es %lf\n", potencia(numero, exponente));
	
return 0;
}
