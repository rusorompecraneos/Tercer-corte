#include <iostream>
#include <stack>
#include <string>
#include <list>

using namespace std;

struct Llamada {
    string numero;
    string fechaHora;
};

void agregarLlamada(stack<Llamada>& pila) {
    Llamada nuevaLlamada;
    cout << "Ingrese el numero de la llamada: ";
    cin >> nuevaLlamada.numero;
    cout << "Ingrese la fecha de la llamada (formato: dd/mm/yyyy): ";
    cin >> nuevaLlamada.fechaHora;
    pila.push(nuevaLlamada);
}

void mostrarLlamadas(stack<Llamada>& pila) {
    while (!pila.empty()) {
        Llamada actual = pila.top();
        cout << "Numero: " << actual.numero << ", Fecha/Hora: " << actual.fechaHora << endl;
        pila.pop();
    }
}

int main() {
    stack<Llamada> llamadasRecientes;
    
    int opcion;
    do {
        cout << "Seleccione una opción: "<< endl;
        cout << "1. Agregar llamada\n" << endl;
        cout << "2. Mostrar llamadas\n" << endl;
        cout << "3. Salir\n" << endl;
       
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                agregarLlamada(llamadasRecientes);
                break;
            case 2:
                mostrarLlamadas(llamadasRecientes);
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
