#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct Personaje {
    string nom;
    int puntosF;
};

int main() {
    Personaje p1, p2;

    cout << "Ingresar nombre de personaje 1: ";
    getline(cin, p1.nom);

    cout << "Ingresar puntos de fuerza: ";
    cin >> p1.puntosF;

    cin.ignore();

    cout << "Ingresar nombre de personaje 2: ";
    getline(cin, p2.nom);

    cout << "Ingresar los puntos de fuerza: ";
    cin >> p2.puntosF;

    if (p1.puntosF > p2.puntosF) {
        cout << p1.nom << " es mas fuerte." << endl;
    } 
    else if (p2.puntosF > p1.puntosF) {
        cout << p2.nom << " es mas fuerte." << endl;
    } 
    else {
        cout << "Los dos personajes tienen la misma fuerza." << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
