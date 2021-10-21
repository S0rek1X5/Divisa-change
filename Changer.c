#include <stdio.h>
void Bolivar(float a){
	float result;
	result=a/32738.48;
	printf("Su cantidad es-> $%1.2f Dolares",result);
}
void Canadiense(float a){
	float result;
	result=a/1.31;
	printf("Su cantidad es-> $%1.2f Dolares",result);
}
void Libra(float a){
	float result;
	result=a/0.78;
	printf("Su cantidad es-> $%1.2f Dolares",result);
}
void PesoCol(float a){
	float result;
	result=a/3777.51;
	printf("Su cantidad es-> $%1.2f Dolares",result);
}
void PesoMex(float a){
	float result;
	result=a/21.98;
	printf("Su cantidad es-> $%1.2f Dolares",result);
}
void PesoArg(float a){
	float result;
	result=a/69.31;
	printf("Su cantidad es-> $%1.2f Dolares",result);
}
void Yen(float a){
	float result;
	result=a/107.30;
	printf("Su cantidad es-> $%1.2f Dolares",result);
}
void Yuan(float a){
	float result;
	result=a/7.07;
	printf("Su cantidad es-> $%1.2f Dolares",result);
}
void Euro(float a){
	float result;
	result=a/0.88;
	printf("Su cantidad es-> $%1.2f Dolares",result);
}
void Real_Br(float a){
	float result;
	result=a/5.06;
	printf("Su cantidad es-> $%1.2f Dolares",result);
}
int main ()
{
	int divisa, opc;
	float moneda;
	do{
		printf("\t----Bienvenido----\n");
		printf("\nIntroduzca su dinero \n: ");scanf("%f", &moneda);
		printf("\tIntroduzca el tipo de moneda que ha ingresado \nBOLIVAR marque\t-1-\nDOLAR CANADIENSE marque -2-\nLIBRA marque\t-3-\nPESO COLOMBIANO marque\t-4-\nPESO MEXICANO marque\t-5-\nPESO ARGENTINO marque\t-6-\nYEN marque\t-7-\nYUAN marque\t-8-\nEURO marque\t-9-\nREAL BRASILENHO marque\t-10-\n: ");scanf("%d", &divisa);
		if (divisa==1){
			Bolivar(moneda);
		}
		else if(divisa==2){
			Canadiense(moneda);
		}
		else if(divisa==3){
			Libra(moneda);
		}
		else if(divisa==4){
			PesoCol(moneda);
		}
		else if(divisa==5){
			PesoMex(moneda);
		}
		else if(divisa==6){
			PesoArg(moneda);
		}
		else if(divisa==7){
			Yen(moneda);
		}
		else if(divisa==8){
			Yuan(moneda);
		}
		else if(divisa==9){
			Euro(moneda);
		}
		else if(divisa==10){
			Real_Br(moneda);
		}
		else{
			printf("\nERROR SELECCIONE CORRECTAMENTE EL TIPO DE MONEDA QUE INGRESO\n");
		}
		printf("\n\nPresione 1 para CONTINUAR --- 2 para SALIR\n: ");scanf("%d",&opc);
		printf("\n----------------------------------\n");
	}while(opc==1);
	return 0;
}
