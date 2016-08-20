#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>
#include <vector>
#include <string>

#include "../h/Vertice.h"
#include "../h/Edge.h"

using namespace std;

template <class T>
class Graph{

private:
	vector< Vertice<T> > vertices;
	vector< Edge<T> > edges;

public:
	int Deg(T v);
	int Deg();

	Graph<T>();	
};


	template<typename T>
	int Graph<T>::Deg(){
		return this.edges.size()/2;
	};

	template<typename T>
	int Graph<T>::Deg(T v){
		
		int Sum = 0;

		for(typename std::vector<T>::const_iterator edge = this->edges.begin(); edge != this->edges.end(); ++edge)
			Sum+= 1;

		return Sum;
	};

	template<class T>
	Graph<T>::Graph(){};

#include "../hpp/Graph.hpp"
#endif