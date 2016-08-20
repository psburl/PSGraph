#ifndef VERTICE_HPP
#define VERTICE_HPP

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

template <class T>
class Vertice{

	public:
		T alias;

	public: 

		T GetAlias();
		Vertice<T>(T alias);
		Vertice<T>();

		string ToString();
};

#include "../hpp/Vertice.hpp"

#endif