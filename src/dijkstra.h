#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <string>
#include <map>
using namespace std;

void dijkstra(const map<int, map<int, map<int, int>>> aristas, int inicio, int fin);

#endif