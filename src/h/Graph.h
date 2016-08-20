#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>
#include <vector>
#include <string>

#include "../h/Vertice.h"
#include "../h/Edge.h"

using namespace std;

#define t_Vertice Vertice<T>
#define t_Edge Edge<t_Vertice>

template <class T>
class Graph{

public:
	vector<t_Vertice> vertices;
	vector<t_Edge> edges;

public:
	int Deg(T v);
	int Deg();

	bool ContainsVertice(T v);
	void InsertVertice(T v);

	void InsertEdge(t_Vertice u, t_Vertice v);

	Graph<T>();	
};


#include "../hpp/Graph.hpp"
#endif