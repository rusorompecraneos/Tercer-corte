#include <iostream>
#include <stack>
#include <queue>

using namespace std;

// Estructura para representar una impresión
struct Impresion {
    string nombre;
    int numero;
};


void agregarPendiente(stack<Impresion>& pendientes, const Impresion& impresion) {
    pendientes.push(impresion);
}
   
void mostrarPendientes(const stack<Impresion>& pendientes) {
    cout << "Impresiones pendientes:" << endl;
    while (!pendientes.empty()) {
        cout << pendientes.top().nombre << " - " << pendientes.top().numero << endl;
        pendientes.pop();
    }
}

int main(){
    int desicion;
    cout << "Si desea agregar una impresion a la lista, digite 1" << endl;
    cout << "Si desea mostrar las impresiones faltantes, digite 2" << endl;
    cin >> desicion;

    if(desicion == 1){
         void agregarPendiente();
    }
   
    if (desicion == 2){
        void mostrarPendientes();
    }
}