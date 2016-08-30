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

	private:
		T alias;

	public: 

		T GetAlias();
		Vertice<T>(T alias);
		Vertice<T>();

		string ToString();

		bool operator==(Vertice<T> v);
		bool operator!=(Vertice<T> v);
		bool operator>(Vertice<T> v);
		bool operator<(Vertice<T> v);
};

#include "../hpp/Vertice.hpp"

#endif