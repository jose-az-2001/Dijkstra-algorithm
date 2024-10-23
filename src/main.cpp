#include <iostream>
#include <string>
#include <map>
#include "dijkstra.h"

using namespace std;

int main() {
    int numNodos, numAristas, nodoinicio, nodofin;
    int arista_inicio, arista_fin, peso;
    map<int, map<int, map<int, int>>> aristas; // {no_arista, nodo_inicio: {nodo_fin: peso}}

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

    for (int i = 0; i < numAristas; i++) {
        cout << "Ingrese el nodo de inicio de la arista: ";
        cin >> arista_inicio;
        cout << "Ingrese el nodo final de la arista: ";
        cin >> arista_fin;
        cout << "Ingrese el peso de la arista: ";
        cin >> peso;
        // Agregar arista al grafo
        aristas.insert({i, {{arista_inicio, {arista_fin, peso}}}});
    }

    // Llamada al método Dijkstra
    dijkstra(aristas, nodoinicio, nodofin);

    return 0;
}