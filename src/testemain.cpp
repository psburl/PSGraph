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

#define GType int	

#define m_Edge Edge<GType>

int main(void){

	Graph<GType> G = Graph<GType>();

	G.InsertVertice(4);
	G.InsertVertice(1);
	G.InsertVertice(3);
	G.InsertEdge(m_Edge(1, 4));
	G.InsertEdge(m_Edge(4, 3));

	map<int, bool> visited;
	
	if(G.HasWay(3,4)) cout << "sim";

	G.Print();

		
};

#endif