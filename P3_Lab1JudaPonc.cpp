#include <iostream>
#include<math.h>

using namespace std;
int buscadorPrimos (int);// funcion para encontrar numeros primos


int main(int argc, char** argv) {
	int inputNumber;
	int auxiliar, contador=4;

	cout<<" Por favor ingrese un numero menos que 100: ";
	cin>> inputNumber;
	if(inputNumber<2 || inputNumber>=100){
		cout<<"Lo sentimos el numero debe ser mayor o igual que 2 o menor o igual que 99";
			}else{
				for(int i=2; i< inputNumber-1; i++){
						for(int j=2; j< inputNumber-1; j++){
    		   		 	int EncuentraPrimoI = buscadorPrimos (i);
						int EncuentraPrimoJ = buscadorPrimos(j);
						if (EncuentraPrimoJ ==1 && EncuentraPrimoJ == 1){
						if (i+j == contador){
							cout << i << " + " << j << " = " << contador << endl;
							contador += 2;
						}
					}
						if (contador > inputNumber){
						break;
					}
		
				}
		}
	
	return 0;
}
}

int buscadorPrimos (int num){
	int contadorDePrimos = 1, ceros = 0;
	do{
		if(num % contadorDePrimos == 0){
			ceros++;
		}
		contadorDePrimos++;
	}while(contadorDePrimos <= num);
	
	if(ceros == 2){
		return 1;
	}else{
		return 0;
	}
	
	}
