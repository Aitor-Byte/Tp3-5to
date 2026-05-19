#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
double BytesAKylobytes(double bytes){
 return bytes / 1024;	
}
double KylobytesAMegabytes(double kb){
	return kb / 1024;
}
double MegabytesAGigabytes(double mb){
	return mb / 1024;
}
double GigabytesATerabytes(double gb){
	return Gb / 1024;
}
double TerabytesAPetabytes(double tb){
	return tb / 1024
}
//Multiplicaciones
double TerabytesAGigabytes(double gb){
	return tb * 1024;
}
double GigabytesAMegabytes(double mb){
	return gb * 1024;
}
double MegabytesAKilobytes(double kb){
	return mb * 1024;
}
double KilobytesABytes(double Bytes){
	return kb * 1024;
}
int main(){
	int opcion;
	double valor, resultado;
	
	cout << "1. Bytes a Kilobytes" << endl;
    cout << "2. Kilobytes a Megabytes" << endl;
    cout << "3. Megabytes a Gigabytes" << endl;
    cout << "4. Gigabytes a Terabytes" << endl;
    cout << "5. Terabytes a Megabytes" << endl;
    cout << "6. Gigabytes a Petabytes" << endl;
    cout << "7. Petabytes a Terabytes" << endl;

	if(opcion < 1 || opcion > 7) {
        cout << "Opcion no valida. Fin del programa." << endl;
        return 0;
    }c
	cout << "Ingrese la cantidad a convertir: ";
    cin >> valor;

	switch(opcion){
        case 1:
            resultado = BytesAKilobytes(valor);
            cout << valor << " B equivalen a " << resultado << " KB." << endl;
            break;
            
        case 2:
            resultado = KilobytesAMegabytes(valor);
            cout << valor << " KB equivalen a " << resultado << " MB." << endl;
            break;
            
        case 3:
            resultado = MegabytesAGigabytes(valor);
            cout << valor << " MB equivalen a " << resultado << " GB." << endl;
            break;
            
        case 4:
            resultado = GigabytesATerabytes(valor);
            cout << valor << " GB equivalen a " << resultado << " TB." << endl;
            break;
            
        case 5:
            // Terabytes a Megabytes: TB -> GB -> MB (Multiplica dos veces)
            resultado = GigabytesAMegabytes( TerabytesAGigabytes(valor) );
            cout << valor << " TB equivalen a " << resultado << " MB." << endl;
            break;
            
        case 6:
            // Gigabytes a Petabytes: GB -> TB -> PB (Divide dos veces)
            resultado = TerabytesAPetabytes( GigabytesATerabytes(valor) );
            cout << valor << " GB equivalen a " << resultado << " PB." << endl;
            break;
            
        case 7:
            resultado = PetabytesATerabytes(valor);
            cout << valor << " PB equivalen a " << resultado << " TB." << endl;
            break;
}            

	
	
	return 0;
}
