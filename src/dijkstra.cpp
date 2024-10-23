#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
#include "dijkstra.h"
#include <limits>

using namespace std;

void dijkstra(map<int, map<int, int>> aristas, int inicio, int fin) {
    // aristas = {nodo_inicio: {nodo_fin: peso}}
    map<int, int> distancias;   // Para almacenar las distancias mínimas desde el nodo inicial
    map<int, string> rutas;     // Para almacenar las rutas
    map<int, bool> visitados;   // Para marcar qué nodos ya fueron procesados

    // Inicializar las distancias a infinito y las rutas vacías
    for (const auto& arista : aristas) {
        int nodo = arista.first; // Nodo de inicio
        distancias[nodo] = numeric_limits<int>::max(); // Infinito
        rutas[nodo] = "";
    }
    distancias[inicio] = 0; // La distancia al nodo inicial es 0
    rutas[inicio] = to_string(inicio);

    // Bucle principal: continuar hasta procesar todos los nodos o encontrar la solución
    while (true) {
        // Encontrar el nodo no visitado con la distancia mínima
        int nodoActual = -1;
        for (const auto& par : distancias) {
            if (!visitados[par.first] && (nodoActual == -1 || par.second < distancias[nodoActual])) {
                nodoActual = par.first;
            }
        }

        // Si no encontramos un nodo no visitado, terminamos
        if (nodoActual == -1) {
            break; 
        }

        // Marcar el nodo como visitado
        visitados[nodoActual] = true;

        // Si llegamos al nodo final, podemos terminar
        if (nodoActual == fin) {
            cout << "Distancia más corta al nodo " << fin << " es: " << distancias[fin] << endl;
            cout << "Ruta: " << rutas[fin] << endl;
            return;
        }

        // Actualizar las distancias de los nodos vecinos
        for (const auto& destino : aristas[nodoActual]) {
            int nodoFin = destino.first;
            int peso = destino.second;

            // Si encontramos una distancia más corta, la actualizamos
            if (distancias[nodoActual] + peso < distancias[nodoFin]) {
                distancias[nodoFin] = distancias[nodoActual] + peso;
                rutas[nodoFin] = rutas[nodoActual] + " -> " + to_string(nodoFin);
            }
        }
    }

    // Si salimos del bucle y no encontramos una ruta al nodo final
    if (distancias[fin] == numeric_limits<int>::max()) {
        cout << "No hay una ruta disponible desde " << inicio << " hasta " << fin << endl;
    }
}
