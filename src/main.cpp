#include <iostream>
#include <string>
#include <map>
#include "dijkstra.h"

using namespace std;

int main() {
    int numNodos, numAristas, nodoinicio, nodofin;
    int arista_inicio, arista_fin, peso;
    map<int, map<int, int>> aristas; // {nodo_inicio: {nodo_fin: peso}}

    cout << "======================================" << endl;
    cout << "      Ruta más corta con Dijkstra     " << endl;
    cout << "======================================" << endl;
    cout << "Ingrese el número de nodos del grafo: ";
    cin >> numNodos;
    cout << "Ingrese el número de aristas del grafo: ";
    cin >> numAristas;
    cout << "Ingrese cuál es el nodo de inicio: ";
    cin >> nodoinicio;
    cout << "Ingrese cuál es el nodo final: ";
    cin >> nodofin;
    cout << "======================================" << endl;

    cout << "Ingrese las aristas en el formato: nodo_inicio nodo_fin peso" << endl;
    cout << "Por ejemplo: 1 2 400" << endl;
    cout << "======================================" << endl;

    for (int i = 0; i < numAristas; i++) {
        cin >> arista_inicio >> arista_fin >> peso;
        // Agregar arista al grafo
        aristas[arista_inicio][arista_fin] = peso;
    }

    // Llamada al método Dijkstra
    dijkstra(aristas, nodoinicio, nodofin);

    return 0;
}
