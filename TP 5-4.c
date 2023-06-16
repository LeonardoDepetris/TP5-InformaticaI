#include <stdio.h>
#include <math.h>

int NumMayor(int n1, int n2, int n3){
	int mayor;
	
	if ( n1 > n2 )
		
		if ( n1 > n3 )
			mayor=n1;
		else
			mayor=n3;
		
		else
			if ( n2 > n3 )
				mayor=n2;
			else
				mayor=n3;
	return mayor;
}	

int main() {
int n1, n2, n3;
int NumeroMayor;

	printf("introducir el primer numero: \n");
	scanf("%d",&n1);
	
	printf("introducir el segundo numero: \n");
	scanf("%d",&n2);
	
	printf("introducir el tercer numero: \n");
	scanf("%d",&n3);
	
	NumeroMayor = NumMayor(n1, n2, n3);
	
	printf("el numero mayor es: %d\n",(NumMayor(n1,n2,n3)));
	
	return 0;
}

