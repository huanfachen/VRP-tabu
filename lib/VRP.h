#ifndef VRP_H
#define VRP_H

#include <iostream>
#include "Graph.h"
#include "Route.h"

typedef std::multimap<int, Customer> Map;

class VRP {
private:
    Graph graph;
    std::list<Route> routes;
    int numVertices;
    int vehicles;
    int capacity;
    int workTime;
    Map::iterator InsertStep(Customer, Map::iterator, Map::iterator, Route &, Map &);
public:
    VRP() {}
    VRP(Graph g, const int n, const int v, const int c, const int t);
    void InitSolutions();
    ~VRP();
};

#endif /* VRP_H */