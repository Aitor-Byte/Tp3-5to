//Crear un programa que actúe como una calculadora, utilizando funciones para
//realizar las operaciones aritméticas básicas.
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);
int main(){
	int opcion;
	int n1, n2, resultado;	 
	cout<<"Elija que quiere hacer: \n 1. Sumar \n 2. Restar \n 3. Multiplicar \n 4. Dividir \n 5. Salir \n"; cin>>opcion;
	if (opcion >= 1 && opcion <= 4) {
            cout << "Ingresa el primer numero: ";
            cin >> n1;
            cout << "Ingresa el segundo numero: ";
            cin >> n2;
        }
	
switch(opcion){
	case 1:
	resultado = suma(n1, n2);
	cout<<"Resultado: "<<resultado<<endl;
	break;
	
	case 2:
	resultado = resta(n1, n2);
	cout<<"Resultado: "<<resultado<<endl;
	break;
	
	case 3:
	resultado = multiplicacion(n1, n2);
	cout<<"Resultado: "<<resultado<<endl;
	break;
	
	case 4:
	if(n2==0){
		cout<<"Error."<<endl;
	}
	else{
	resultado = division(n1, n2);
	cout<<"Resultado: "<<resultado<<endl;
	}
	break;
	
	case 5:
	return 0;
	break;
}
	
	return 0;
}
int suma(int a, int b){
	return a+b;
}
int resta(int a, int b){
	return a-b;
}
int multiplicacion(int a, int b){
	return a*b;
}
int division(int a, int b){
	return a/b;
}
