#include <iostream>
#include<math.h>

using namespace std;

int main(int argc, char** argv) {
	int inputNumber;
	int auxiliar, contador=4;
	cout<<" Por favor ingrese un numero menos que 100: ";
	cin>> inputNumber;
	if(inputNumber<2 || inputNumber>=100){
		cout<<"Lo sentimos el numero debe ser mayor o igual que 2 o menor o igual que 99";
			}else{
				for(int i=0; i< inputNumber; i++){
					auxiliar=i%2==0;
		 			int ceros = 0, contadorPrimos = 1;// Se declara y se inicializa 2 contadores, uno que controla el ciclo y otro que controla la cantida de residuo que sean igual a 0
            while (contadorPrimos <= i) {
                if (i % contadorPrimos == 0) {
                    ceros++;
                }
                contadorPrimos++;// Se incrementa este ciclo para que el ciclo no se haga infinito
            }
            if (ceros == 2) {// Se valida de que el contador de residuo igual a cero en total sea 2
            	//for(int j=0;  j< inputNumber; j++){
				
               while(i+i==contador){
               		cout<< i<<" + "<< i<< " = "<< contador<<endl;
               		contador+=2;
               		if(contador<inputNumber){
               			break;
					   }
               		
			  // }
		}

            } 
		
	}
}
	
	return 0;
}
