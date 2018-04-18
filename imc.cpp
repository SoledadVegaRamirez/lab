#include <stdio.h>

int main(){
	float peso,alt, resul;
	
	
	printf("Ingrese sus datos para calcular su indice de masa corporal\n");
	
	printf("Ingrese su peso en kilogramos:\n");
	scanf("%f",&peso);
	
	printf("Ingrese su altura en metros:\n");
	scanf("%f",&alt);
	
	resul=peso/(alt*alt);
	
	if(resul>30){
		printf("Usted tiene obesidad\n");
	}
	if(resul<25){
		printf("Usted tiene un peso normal\n");
	}
	return 0;
	
}
