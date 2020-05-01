#include <iostream>
#include<math.h>

using namespace std;
int buscadorPrimos (int);// funcion para encontrar numeros primos


int main(int argc, char** argv) {
	int inputNumber;
	int multiploDe2=4;

	cout<<" Por favor ingrese un numero menos que 100: ";
	cin>> inputNumber;
	if(inputNumber<2 || inputNumber>=100){
		cout<<"Lo sentimos el numero debe ser mayor o igual que 2 o menor o igual que 99";
			}else{
				cout<<"La conjetura de Goldbach es:"<<endl;
					int EncuentraPrimoI;
					int EncuentraPrimoJ;
					for(int i=2; i< inputNumber-1; i++){
						for(int j=2; j< inputNumber-1; j++){
    		   		 	 	EncuentraPrimoI = buscadorPrimos (i);
						 	EncuentraPrimoJ = buscadorPrimos(j);
							if (EncuentraPrimoJ ==1 && EncuentraPrimoJ == 1){
								if (i+j == multiploDe2){
								cout << i << " + " << j << " = " << multiploDe2 << endl;
								multiploDe2 += 2;
							}
						}	
						if (multiploDe2 > inputNumber){
						break;
					}
		
				}
		}
	
	return 0;
	}
}

int buscadorPrimos (int digito){
int ceros = 0, contadorPrimos = 1;// Se declara y se inicializa 2 contadores, uno que controla el ciclo y otro que controla la cantida de residuo que sean igual a 0
while (contadorPrimos <= digito) {
    if (digito % contadorPrimos == 0) {
    	ceros++;
    }
    contadorPrimos++;// Se incrementa este ciclo para que el ciclo no se haga infinito
}
if (ceros == 2) {// Se valida de que el contador de residuo igual a cero en total sea 2
     return 1;

    } else {
    	return 0;
    }
}
