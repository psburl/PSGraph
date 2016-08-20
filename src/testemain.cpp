#ifndef Main
#define Main

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ostream>

#include "h/Vertice.h"
#include "h/Edge.h"
#include "h/Graph.h"

using namespace std;

#define m_Vertice Vertice<string>
#define m_Edge Edge<m_Vertice>

int main(void){

	Graph<string> G = Graph<string>();

	G.InsertVertice("oi");
	G.InsertVertice("ui");
	G.InsertEdge(m_Vertice("oi"), m_Vertice("ui"));

	cout << G.Deg();
};

#endif