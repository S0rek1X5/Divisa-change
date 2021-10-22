#include <iostream>
using namespace std;
void Bolivar(float a){
	float result;
	result=a/32738.48;
	cout<<"Su cantidad es-> $"<<result;
}
void Canadiense(float a){
	float result;
	result=a/1.31;
	cout<<"Su cantidad es-> $"<<result;
}
void Libra(float a){
	float result;
	result=a/0.78;
	cout<<"Su cantidad es-> $"<<result;
}
void PesoCol(float a){
	float result;
	result=a/3777.51;
	cout<<"Su cantidad es-> $"<<result;
}
void PesoMex(float a){
	float result;
	result=a/21.98;
	cout<<"Su cantidad es-> $"<<result;
}
void PesoArg(float a){
	float result;
	result=a/69.31;
	cout<<"Su cantidad es-> $"<<result;
}
void Yen(float a){
	float result;
	result=a/107.30;
	cout<<"Su cantidad es-> $"<<result;
}
void Yuan(float a){
	float result;
	result=a/7.07;
	cout<<"Su cantidad es-> $"<<result;
}
void Euro(float a){
	float result;
	result=a/0.88;
	cout<<"Su cantidad es-> $"<<result;
}
void Real_Br(float a){
	float result;
	result=a/5.06;
	cout<<"Su cantidad es-> $"<<result;
}
int main ()
{
	int divisa, opc;
	float moneda;
	do{
		cout<<"\t----Bienvenido----";
		cout<<"\nIntroduzca su dinero \n: ";cin>>moneda;
		cout<<"\tIntroduzca el tipo de moneda que ha ingresado \nBOLIVAR marque\t-1-\nDOLAR CANADIENSE marque -2-\nLIBRA marque\t-3-\nPESO COLOMBIANO marque\t-4-\nPESO MEXICANO marque\t-5-\nPESO ARGENTINO marque\t-6-\nYEN marque\t-7-\nYUAN marque\t-8-\nEURO marque\t-9-\nREAL BRASILENHO marque\t-10-\n: ";cin>>divisa;
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
			cout<<"\nERROR SELECCIONE CORRECTAMENTE EL TIPO DE MONEDA QUE INGRESO\n";
		}
		cout<<"\n\nPresione 1 para CONTINUAR --- 2 para SALIR\n: ";cin>>opc;
		cout<<"\n----------------------------------\n";
	}while(opc==1);
	return 0;
}
