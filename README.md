# Algoritmo de Dijkstra en C++

Este repositorio contiene una implementación básica del algoritmo de Dijkstra en C++. El algoritmo se utiliza para encontrar la ruta más corta en un grafo ponderado, partiendo de un nodo inicial hacia un nodo final.

## Estructura del Proyecto

El proyecto está compuesto por dos archivos principales:

1. **`main.cpp`**: Es el punto de entrada del programa. Permite al usuario ingresar el número de nodos, aristas, el nodo de inicio y el nodo final. Luego, llama a la función que ejecuta el algoritmo de Dijkstra.

2. **`dijkstra.cpp`**: Contiene la implementación del algoritmo de Dijkstra. A través de un grafo representado en una estructura `map`, el algoritmo calcula la ruta más corta desde el nodo inicial hasta el nodo final.

### Archivos

- **`main.cpp`**: 
  - Solicita al usuario la información del grafo (nodos, aristas, pesos) y ejecuta el algoritmo.
  - Invoca a la función `dijkstra()` para encontrar la ruta más corta.

- **`dijkstra.cpp`**: 
  - Implementa el algoritmo de Dijkstra para calcular la ruta más corta.
  - Muestra la distancia mínima y la ruta desde el nodo de inicio hasta el nodo final.

## Uso

1. **Compilación**:
    Para compilar el proyecto, asegúrate de tener un compilador de C++ instalado. Puedes usar `g++` en la línea de comandos para compilar ambos archivos juntos:

    ```bash
    g++ -o dijkstra main.cpp dijkstra.cpp
    ```

2. **Ejecución**:
    ```bash
    ./dijkstra
    ```

3. **Interacción con el programa:**:
    El programa pedirá el número de nodos y aristas del grafo.

    Después, solicita los nodos de inicio, los nodos de destino y el peso de las aristas.

    Finalmente, se pide el nodo inicial y el nodo final para calcular la ruta más corta.

    El formato para ingresar las aristas es el siguiente:

    nodo_inicio nodo_fin peso, por ejemplo 1 2 400




## Ejemplo de Ejecucion
    
    ======================================
         Ruta más corta con Dijkstra     
    ======================================
    Ingrese el número de nodos del grafo: 4
    Ingrese el número de aristas del grafo: 4
    Ingrese cuál es el nodo de inicio: 1
    Ingrese cuál es el nodo final: 4
    ======================================
    Ingrese las aristas en el formato: nodo_inicio nodo_fin peso
    Por ejemplo: 1 2 400
    ======================================
    1 2 5
    1 3 10
    2 4 2
    3 4 1

    Distancia más corta al nodo 4 es: 7
    Ruta: 1 -> 2 -> 4


## Estructura de Datos

- **Aristas**: Se almacenan en un `map<int, map<int, int>>` que tiene la siguiente estructura:
  - `{nodo_inicio: {nodo_fin: peso}}`

### Futuras Mejoras

- Implementar detección de grafos desconectados y manejar errores en la entrada de datos.
