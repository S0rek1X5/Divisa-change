#include <stdio.h>
int main ()
{
	//Cambio de divisas basico
	int divisa;
	float moneda, bolivar, canadiense, libra, pesoCol, pesoMex, yen, yuan, euro, realbr, pesoArg;
	
	printf("Introduzca su cantidad\n: ");
	scanf("%f", &moneda);
	
	//Ecuaciones de cambio
	bolivar=moneda/32738.48;
	canadiense=moneda/1.31;
	libra=moneda/0.78;
	pesoCol=moneda/3777.51;
	pesoMex =moneda/21.98;
	pesoArg=moneda/69.31;
	yen=moneda/107.30;
	yuan=moneda/7.07;
	euro=moneda/0.88;
	realbr=moneda/5.06;
	
	printf("Introduzca el tipo de moneda con la que desea hacer el cambio \nBolivar marque -1-\nDolar canadiense marque -2-\nLibra marque -3-\nPeso colombiano marque -4-\nPeso mexicano marque -5-\nPeso argentino marque -6-\nYen marque -7-\nYuan marque -8-\nEuro marque -9-\nReal brasileño marque -10-\n: ");
	scanf("%d", &divisa);
	
	//Bloque de eleccion
	if (divisa==1){
		printf("\nSu cantidad es -> %1.2f", bolivar);
	}
	else if(divisa==2){
		printf("\nSu cantidad es -> %1.2f", canadiense);
	}
	else if(divisa==3){
		printf("\nSu cantidad es -> %1.2f", libra);
	}
	else if(divisa==4){
		printf("\nSu cantidad es -> %1.2f", pesoCol);
	}
	else if(divisa==5){
		printf("\nSu cantidad es -> %1.2f", pesoMex);
	}
	else if(divisa==6){
		printf("\nSu cantidad es -> %1.2f", pesoArg);
	}
	else if(divisa==7){
		printf("\nSu cantidad es -> %1.2f", yen);
	}
	else if(divisa==8){
		printf("\nSu cantidad es -> %1.2f", yuan);
	}
	else if(divisa==9){
		printf("\nSu cantidad es -> %1.2f", euro);
	}
	else if(divisa==10){
		printf("\nSu cantidad es -> %1.2f", realbr);
	}
	else{
		printf("\nLa moneda que ha seleccionado no esta dentro de nuestros servicios del cambio");
	}
	return 0;
}
