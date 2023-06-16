#include <stdio.h>
#include <math.h>
float CompraConDescuento( float Presio, float Descuento){
float ConDesc;

Descuento = Presio*(Descuento/100);
ConDesc = Presio-Descuento;

return ConDesc;
}

int main(void) {
float Presio, Descuento,ConDescuento;
	
	printf("el valor de la compra es: ");
	scanf("%f",&Presio);
	
	printf("el descuento es de: ");
	scanf("%f",&Descuento);
	
	ConDescuento = CompraConDescuento(Presio, Descuento); 
	
	printf("El valor de la compra con el descuento aplicado es de: %.2f\n",ConDescuento);
	
	return 0;
}
	
