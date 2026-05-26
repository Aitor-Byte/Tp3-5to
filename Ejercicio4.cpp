#include <iostream>
#include <string>

using namespace std;

bool buscarPalabra(const string& cadena, const string& palabra) {
    if (cadena.find(palabra) != string::npos) {
        return true;
    }
    return false;
}

void imprimirResultado(bool encontrado, const string& palabra) {
    if (encontrado) {
        cout << "La palabra '" << palabra << "' se encuentra en la cadena." << endl;
    } else {
        cout << "La palabra '" << palabra << "' no se encuentra en la cadena." << endl;
    }
}

int main() {
    string cadena;
    string palabra;

    cout << "Cadena: ";
    getline(cin, cadena);

    cout << "Palabra: ";
    cin >> palabra;

    bool encontrado = buscarPalabra(cadena, palabra);
    imprimirResultado(encontrado, palabra);

    return 0;
}
