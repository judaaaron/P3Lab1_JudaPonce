#include <iostream>
#include<math.h>

using namespace std;

int main(int argc, char** argv) {
	int inputNumber;
	cout<<" Por favor ingrese un numero menos que 100: ";
	cin>> inputNumber;
	if(inputNumber<=2 || inputNumber>=100){
	
	cout<<"Lo sentimos el numero debe ser mayor o igual que 2 o menor o igual que 99";
}else{
	cout<<"correcto";
}
	
	return 0;
}
