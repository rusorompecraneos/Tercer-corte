#include <iostream>
#include <queue>
#include <ctime>
#include <cstdlib>

using namespace std;


struct Usuario {
    string nombre;
    int posicion;
    time_t tiempoEntrada;
    time_t tiempoSalida;
};


void agregarUsuario(queue<Usuario>& cola, const Usuario& usuario) {
    cola.push(usuario);
}

time_t calcularTiempoEspera(time_t tiempoEntrada) {
 
    srand(time(NULL));
    return tiempoEntrada + rand() % 60; 
}

// Función para mostrar la información de un usuario
void mostrarUsuario(const Usuario& usuario) {
    cout << "Nombre: " << usuario.nombre << endl;
    cout << "Posicion: " << usuario.posicion << endl;
    cout << "Tiempo de entrada: " << ctime(&usuario.tiempoEntrada);
    cout << "Tiempo de salida: " << ctime(&usuario.tiempoSalida) << endl;
}

int main() {
   
    queue<Usuario> cola;

   
    agregarUsuario(cola, {"Juan", 1, time(0)});
    agregarUsuario(cola, {"Maria", 2, time(0)});
    agregarUsuario(cola, {"Pedro", 3, time(0)});

    while (!cola.empty()) {
        Usuario& usuario = cola.front();
        usuario.tiempoSalida = calcularTiempoEspera(usuario.tiempoEntrada);
        cola.pop(); // Remover el usuario de la cola
        mostrarUsuario(usuario); // Mostrar la información del usuario
    }

    return 0;
}




