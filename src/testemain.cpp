#ifndef Main
#define Main

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

#include "h/Edge.h"

using namespace std;

#define m_Vertice Vertice<string>
#define m_Edge Edge<m_Vertice>

int main(void){

	m_Edge edge = m_Edge(m_Vertice("asd"), m_Vertice("3"));


	cout<< edge.ToString();
};

#endif