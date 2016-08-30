#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <map>

#include "../h/Edge.h"

using namespace std;

#define t_Edge Edge<T>

template <class T>
class Graph{

public:
	vector<T> vertices;
	vector<t_Edge> edges;
	bool isDigraph;

public:
	int Deg(T v);
	int Deg();

	bool ContainsVertice(T v);
	void InsertVertice(T v);

	bool ContainsEdge(t_Edge v);
	void InsertEdge(t_Edge e);
	void RemoveEdge(t_Edge e);

	bool HasWay(T u, T w);
	void ReachV(T v, map<T, bool> visited);
	vector<T> GetNeighboors(T v);

	void Print();

	Graph<T>();	
	Graph<T>(bool isDigraph);
};


#include "../hpp/Graph.hpp"
#endif