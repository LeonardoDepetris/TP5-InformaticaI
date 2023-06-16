#include <stdio.h>
#include <math.h>
#define PI 3.1415

float calculo(float radio,float circunsferencia,float area,float volumen, char op){
	
circunsferencia= PI*2*radio;
area=PI*radio*radio;
volumen=4.0/3.0 * PI * pow(radio, 3);

if((op=='a')||(op=='A'))
	{
		{printf ("La Circunsferencia es: %f\n", circunsferencia);}
	}
	else if ((op=='b')||(op=='B'))
	{
		printf ("El Area es= %f\n", area);
	}
	
	else if ((op=='c')||(op=='C'))
	{
		printf ("El Volumen es: %f\n", volumen);
	}
	else {
	printf ("error");
	}
	
	return 0;
}
	int main(void) {
		char op;
		float radio,circunsferencia,area,volumen;
		
		printf ("a)-Cálculo de la longitud de la circunferencia\n");
		printf ("b)-Cálculo del área del círculo\n");
		printf ("c)-Cálculo del volumen de la esfera\n\n");
		printf ("Elija una opción: ");
		scanf("%c", &op);
		
		printf ("Ingrese el radio: ");
		scanf ("%f", &radio);
		
calculo(radio,circunsferencia,area,volumen,op);		
	
	return 0;
	}
