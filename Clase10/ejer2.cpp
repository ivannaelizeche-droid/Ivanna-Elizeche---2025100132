#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    cout << "Primeros 5 numeros pares:" << endl;
    
    // usando el bucle for para imprimir los primeros 5 números pares
    for (int i = 1; i <= 5; i++) {
        cout << i * 2 << endl;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

