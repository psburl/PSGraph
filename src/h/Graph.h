#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

#include "../h/Edge.h"
#include "../h/Functions.h"

using namespace std;

#define t_Edge Edge<T>

template <class T>
class Graph{

public:
	vector<T> vertices;
	map <string, t_Edge> Edges;
	
	typename 
	map<string,t_Edge>::iterator  it_Edges;
	typename 
	vector<T>::iterator  it_Vertices;
	Functions<T> functions; 
	
	bool isDigraph;

public:
	int Deg(T v);
	int Deg();

	string MakeHash(t_Edge e);

	bool ContainsVertice(T v);
	void InsertVertice(T v);

	bool ContainsEdge(t_Edge v);
	void InsertEdge(t_Edge e);
	void RemoveEdge(t_Edge e);

	bool HasWay(T u, T w);
	
	vector<T> GetNeighboors(T v);

	map<string, int> DFS();
	int CountConnexities(map<string, int>& componentGroup);

	void SortEdges();
	void SortVertices();

	void Print();
	
private: 
	void ReachV(T v, map<T, bool>& visited);
	void DFSR(T vertice, map<string, int>& visiteds, int& count);
	void DFSCOMP(T vertice, map<string, int>& componentGroup, int quantity);

public:
	Graph<T>(bool isDigraph = false);
};


#include "../hpp/Graph.hpp"
#endif