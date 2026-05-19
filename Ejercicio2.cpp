#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int contarPalabras(string cadena){
int contador = 1;
if(cadena.empty()){
	return 0;
}
for(int i; i<cadena.length(); i++){
	
	if(cadena[i] == ' '){
	contador++;
	}
}
return contador;
}
int main(){
	
string palabras;	
	cout<<"Ingrese una cadena de palabras: ";
	getline(cin, palabras);
	
	cout<<"Cantidad de palabras: "<<contarPalabras(palabras);
	
	
	
	
	
	return 0;	
}
