#include <stdio.h>
int main ()
{
		//CAMBIO BASICO DE DIVISA
	int divisa, i;
	float moneda, bolivar, canadiense, libra, pesoCol, pesoMex, yen, yuan, euro, realbr, pesoArg;
	char opc;
	i=0;
	while(i<=19){
		printf("\nIntroduzca su cantidad %i\n: ", i+1);
		scanf("%f", &moneda);
		//ECUACIONES DE CAMBIO
		bolivar=moneda*32738.48; canadiense=moneda*1.31; libra=moneda*0.78;
		pesoCol=moneda*3777.51; pesoMex =moneda*21.98; pesoArg=moneda*69.31;
		yen=moneda*107.30; yuan=moneda*7.07; euro=moneda*0.88; realbr=moneda*5.06;
		printf("Introduzca el tipo de moneda que ha ingresado \nBOLIVAR marque -1-\nDOLAR CANADIENSE marque -2-\nLIBRA marque -3-\nPESO COLOMBIANO marque -4-\nPESO MEXICANO marque -5-\nPESO ARGENTINO marque -6-\nYEN marque -7-\nYUAN marque -8-\nEURO marque -9-\nREAL BRASILENHO marque -10-\n: ");
		scanf("%d", &divisa);
		//ELECCION	
		if (divisa==1){
			printf("\nSu cantidad es-> %1.2f", bolivar,"Dolares");
			printf("\n----------------------------------");
		}
		else if(divisa==2){
			printf("\nSu cantidad es-> %1.2f", canadiense,"Dolares");
			printf("\n----------------------------------");
		}
		else if(divisa==3){
			printf("\nSu cantidad es-> %1.2f", libra,"Dolares");
			printf("\n----------------------------------");
		}
		else if(divisa==4){
			printf("\nSu cantidad es-> %1.2f", pesoCol,"Dolares");
			printf("\n----------------------------------");
		}
		else if(divisa==5){
			printf("\nSu cantidad es-> %1.2f", pesoMex,"Dolares");
			printf("\n----------------------------------");
		}
		else if(divisa==6){
			printf("\nSu cantidad es-> %1.2f", pesoArg,"Dolares");
			printf("\n----------------------------------");
		}
		else if(divisa==7){
			printf("\nSu cantidad es-> %1.2f", yen,"Dolares");
			printf("\n----------------------------------");
		}
		else if(divisa==8){
			printf("\nSu cantidad es-> %1.2f", yuan,"Dolares");
			printf("\n----------------------------------");
		}
		else if(divisa==9){
			printf("\nSu cantidad es-> %1.2f", euro,"Dolares");
			printf("\n----------------------------------");
		}
		else if(divisa==10){
			printf("\nSu cantidad es-> %1.2f", realbr,"Dolares");
			printf("\n----------------------------------");
		}
		else{
			printf("\nERROR SELECCIONE CORRECTAMENTE EL TIPO DE MONEDA QUE INGRESO\n");
			printf("\n----------------------------------");
		}
		i=i+1;
	}
	return 0;
}
