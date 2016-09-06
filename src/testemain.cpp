#ifndef Main
#define Main

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>	
#include <ostream>
#include <map>

#include "h/Edge.h"
#include "h/Graph.h"

using namespace std;

#define GType string	

#define m_Edge Edge<GType>

int main(void){

	Graph<GType> G = Graph<GType>();

	G.InsertVertice("a");
	G.InsertVertice("b");
	G.InsertVertice("c");
	G.InsertEdge(m_Edge("a", "b"));
	G.InsertEdge(m_Edge("b", "c"));

	map<int, bool> visited;
	
	if(G.HasWay("a","c")) cout << "sim\n";
	G.DFS();
	G.Print();

		
};

#endif