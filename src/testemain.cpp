#ifndef Main
#define Main

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>	
#include <ostream>

#include "h/Edge.h"
#include "h/Graph.h"

using namespace std;

#define GType int	

#define m_Edge Edge<GType>

int main(void){

	Graph<GType> G = Graph<GType>();

	G.InsertVertice(1);
	G.InsertVertice(2);
	G.InsertEdge(m_Edge(G.vertices[1], G.vertices[0]));

	G.Print();

		
};

#endif