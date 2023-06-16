#include <stdio.h>

int DiasTranscurridos(int dia, int mes){
	int DiasTranscurridos;
	DiasTranscurridos = (((mes-1)*30)+dia);	
	return DiasTranscurridos;
}

int main() {
	int dia,mes,orejadesordo;

	printf("Ingrese el dia : ");
	scanf("%d",&dia);
	printf("Ingrese el mes: ");
	scanf("%d",&mes);
	printf("Ingrese el año: ");
	scanf("%d",&orejadesordo);
	
	printf("\nDias Transcurridos aproximados  : %d Dias.\n",DiasTranscurridos(dia,mes));    
	return 0;
}
