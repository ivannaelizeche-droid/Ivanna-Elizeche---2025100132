#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    char letra;

    cout << "Ingrese una letra: ";

    for (cin >> letra;
         letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u';
         cin >> letra) {
        cout << "No es una vocal minuscula. Intente otra vez: ";
    }

    cout << "\nCorrecto! Has ingresado la vocal minuscula: " << letra << endl;

system("PAUSE");
    return EXIT_SUCCESS;
}
