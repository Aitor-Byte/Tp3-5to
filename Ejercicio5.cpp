#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool esAnagrama(string cadena1, string cadena2) {
    if (cadena1.length() != cadena2.length()) {
        return false;
    }

    sort(cadena1.begin(), cadena1.end());
    sort(cadena2.begin(), cadena2.end());

    return cadena1 == cadena2;
}

void imprimirResultado(bool resultado) {
    if (resultado) {
        cout << "Las cadenas son anagramas." << endl;
    } else {
        cout << "Las cadenas no son anagramas." << endl;
    }
}

int main() {
    string cadena1;
    string cadena2;

    cout << "Primera cadena: ";
    cin >> cadena1;

    cout << "Segunda cadena: ";
    cin >> cadena2;

    bool resultado = esAnagrama(cadena1, cadena2);
    imprimirResultado(resultado);

    return 0;
}
