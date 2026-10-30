#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Definición de la estructura Personaje
struct Personaje {
    string nombre;
    int vida;
    int ataque;
};

// Función para registrar un nuevo personaje y guardarlo en el archivo
void registrarPersonaje() {
    Personaje p;
    
    cout << "\nRegistrar Nuevo Personaje" << endl;
    cout << "Ingresar Nombre: ";
    cin >> ws; 
    getline(cin, p.nombre);
    cout << "Ingresar Puntos de Vida: ";
    cin >> p.vida;
    cout << "Ingresar Puntos de Ataque: ";
    cin >> p.ataque;

    // Abrir el archivo en modo adición (ios::app)
    ofstream archivo("personajes.txt", ios::app);

    // Validación de apertura con is_open()
    if (!archivo.is_open()) {
        cout << "Error: No se pudo abrir el archivo para escritura." << endl;
        return;
    }

    // Escribir los datos en el archivo separados por espacios o formato legible
    archivo << p.nombre << " | Vida: " << p.vida << " | Ataque: " << p.ataque << endl;

    // Cerrar el archivo correctamente
    archivo.close();
    cout << "El Personaje Ha Sido Guardado Exitosamente En Personajes.txt!" << endl;
}

// Función para leer y mostrar la lista completa de personajes desde el archivo
void verPersonajes() {
    // Abrir el archivo en modo lectura
    ifstream archivo("personajes.txt");

    // Validar si el archivo existe o se pudo abrir
    if (!archivo.is_open()) {
        cout << "\n(Aviso: El Archivo No Existe o No Hay Personajes Registrados)." << endl;
        return;
    }

    string linea;
    cout << "\n Lista de Personajes Guardados " << endl;
    
    // Lectura secuencial línea por línea usando getline()
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }
    
    // Cerrar el recurso del archivo
    archivo.close();
}

int main() {
    int opcion;

    // 4. Menú Interactivo en consola
    do {
        cout << "\n REGISTRO DE PERSONAJES" << endl;
        cout << "[1] Registrar Nuevo Personaje" << endl;
        cout << "[2] Ver Personajes Guardados" << endl;
        cout << "[3] Salir" << endl;
        cout << "Seleccionar Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                registrarPersonaje();
                break;
            case 2:
                verPersonajes();
                break;
            case 3:
                cout << "Saliendo del Programa..." << endl;
                break;
            default:
                cout << "Opcion Invalida. Intente Nuevamente." << endl;
        }
    } while (opcion != 3);

    return 0;    return 0;
}
