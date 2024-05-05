#include <iostream>
#include <string>
#include <queue>

using namespace std;

struct Mercado{
    string nombre;
    string ubicacion; 
};

void agregarMercado(queue<Mercado>& cola) {
    Mercado nuevoMercado;
    cout << "Ingrese el nombre del mercado: ";
    cin >> nuevoMercado.nombre;
    cout << "Ingrese la ubicación del mercado: ";
    cin >> nuevoMercado.ubicacion;
    cola.push(nuevoMercado);
}

void sacarMercados(queue<Mercado>& cola) {
    while (!cola.empty()) {
        Mercado actual = cola.front();
        cout << "Sacando mercado: " << actual.nombre << ", Ubicación: " << actual.ubicacion << endl;
        cola.pop();
    }
}

int main() {
    queue<Mercado> listaMercados;
    
    int opcion;
    do {
        cout << "Seleccione una opción: " << endl;
        cout << "1. Agregar mercado\n" << endl;
        cout << "2. Sacar mercados\n" << endl;
        cout << "3. Salir\n"<< endl;
        
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                agregarMercado(listaMercados);
                break;
            case 2:
                sacarMercados(listaMercados);
                break;
            case 3:
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (opcion!= 3);

    return 0;
}